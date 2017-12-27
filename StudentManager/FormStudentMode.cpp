#include "FormStudentMode.h"
#include "ui_FormStudentMode.h"

// === === === === === 基础函数 === === === === ===
FormStudentMode::FormStudentMode(QWidget *parent) : QWidget(parent), ui(new Ui::FormStudentMode) {
    ui->setupUi(this);
    Model = new QSqlQueryModel(ui->tableView);
    ProxyModel = new QSortFilterProxyModel();
    ProxyModel->setSourceModel(Model);
    ui->tableView->setModel(ProxyModel);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //只能按行选取
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
    ui->tableView->setSortingEnabled(true);                            //可以排序
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //不能修改
    ui->lineEditCourseCredit->setValidator(Vsalidator);
    ui->lineEditDownGrade->setValidator(Vsalidator);
    ui->lineEditUpGrade->setValidator(Vsalidator);
}
FormStudentMode::~FormStudentMode() {
    if (Model)
        delete Model;
    if (ProxyModel)
        delete ProxyModel;
    delete Vsalidator;
    delete ui;
}
void FormStudentMode::init(const QString &I, const QString &N) {
    ID = I;
    QString Q = N + "同学欢迎你！";
    ui->labelWelcome->setText(Q);
    get_grade_mode();
}
// === === === === === 模式 === === === === ===
// == == == == == 查询成绩模式 == == == == ==
void FormStudentMode::get_grade_mode() {
    QString Q = "SELECT SUM(课程学分) FROM StudentGetGradeMode WHERE 学生学号=" + ID;
    QSqlQuery SQ;
    if (!SQ.exec(Q))
        qDebug() << SQ.lastError();
    if (SQ.next())
        Q = SQ.value(0).toString();
    Q = "当前已选学分：" + Q + "。双击可退选该门课程。";
    ui->labelStatus->setText(Q);
    ui->comboBox->setCurrentIndex(1);
    Q = "SELECT 教师姓名,教师工号,课程类型,课程名称,课程编号,课程学时,课程学分,课程代码,成绩 FROM StudentGetGradeMode WHERE 学生学号=" + ID;
    Model->setQuery(Q);
    LastQuery = Q;
    ui->lineEditDownGrade->setEnabled(true);
    ui->lineEditUpGrade->setEnabled(true);
}
// == == == == == 选课模式 == == == == ==
void FormStudentMode::select_course_mode() {
    QString Q = "SELECT SUM(课程学分) FROM StudentGetGradeMode WHERE 学生学号=" + ID;
    QSqlQuery SQ;
    if (!SQ.exec(Q))
        qDebug() << SQ.lastError();
    if (SQ.next())
        Q = SQ.value(0).toString();
    Q = "当前已选学分：" + Q + "。双击选择课程。";
    ui->labelStatus->setText(Q);
    ui->comboBox->setCurrentIndex(0);
    Q = "SELECT 教师姓名,教师工号,课程类型,课程名称,课程编号,课程学时,课程学分,课程代码  FROM StudentSelectCourseMode WHERE 学生学号=" + ID;
    Model->setQuery(Q);
    LastQuery = Q;
    ui->lineEditDownGrade->setEnabled(false);
    ui->lineEditUpGrade->setEnabled(false);
}
// === === === === === 功能实现 === === === === ===
// == == == == == 刷新按钮 == == == == ==
void FormStudentMode::on_toolButtonReflash_clicked() {
    // == == == == == 当前为选课模式 == == == == ==
    if (ui->comboBox->currentIndex() == 0) {
        QString Q = "SELECT SUM(课程学分) FROM StudentGetGradeMode WHERE 学生学号=" + ID;
        QSqlQuery SQ;
        if (!SQ.exec(Q))
            qDebug() << SQ.lastError();
        if (SQ.next())
            Q = SQ.value(0).toString();
        Q = "当前已选学分：" + Q + "。双击选择课程。";
        ui->labelStatus->setText(Q);
        ui->comboBox->setCurrentIndex(0);
        Q = "SELECT 教师姓名,教师工号,课程类型,课程名称,课程编号,课程学时,课程学分,课程代码  FROM StudentSelectCourseMode WHERE 学生学号=" + ID;
        Model->setQuery(Q);
        LastQuery = Q;
    }
    // == == == == == 当前为查询模式 == == == == ==
    else if (ui->comboBox->currentIndex() == 1) {
        QString Q = "SELECT SUM(课程学分) FROM StudentGetGradeMode WHERE 学生学号=" + ID;
        QSqlQuery SQ;
        if (!SQ.exec(Q))
            qDebug() << SQ.lastError();
        if (SQ.next())
            Q = SQ.value(0).toString();
        Q = "当前已选学分：" + Q + "。双击可退选该门课程。";
        ui->labelStatus->setText(Q);
        ui->comboBox->setCurrentIndex(1);
        Q = "SELECT 教师姓名,教师工号,课程类型,课程名称,课程编号,课程学时,课程学分,课程代码,成绩 FROM StudentGetGradeMode WHERE 学生学号=" + ID;
        Model->setQuery(Q);
        LastQuery = Q;
    }
}
// == == == == == 清空按钮 == == == == ==
void FormStudentMode::on_pushButtonEmpty_clicked() {
    ui->lineEditCourseName->setText("");
    ui->lineEditDownGrade->setText("");
    ui->lineEditTeacherName->setText("");
    ui->lineEditUpGrade->setText("");
    ui->lineEditCourseCredit->setText("");
    ui->comboBoxCourseType->setCurrentIndex(0);
}
// == == == == == 查询按钮 == == == == ==
void FormStudentMode::on_pushButtonQuery_clicked() {
    QString Q;
    // == == == == == 选课模式 == == == == ==
    if (ui->comboBox->currentIndex() == 0) {
        Q = "SELECT 教师姓名,教师工号,课程类型,课程名称,课程编号,课程学时,课程学分,课程代码  FROM StudentSelectCourseMode WHERE 学生学号=" + ID;
        if (ui->lineEditCourseName->text() != "")
            Q += " AND 课程名称=\"" + ui->lineEditCourseName->text() + "\"";
        if (ui->lineEditTeacherName->text() != "")
            Q += " AND 教师姓名=\"" + ui->lineEditTeacherName->text() + "\"";
        if (ui->lineEditCourseCredit->text() != "")
            Q += " AND 课程学分=" + ui->lineEditCourseCredit->text();
        if (ui->comboBoxCourseType->currentIndex() == 1)
            Q += " AND 课程类型=\"必修\"";
        if (ui->comboBoxCourseType->currentIndex() == 2)
            Q += " AND 课程类型=\"选修\"";
    }
    // == == == == == 查询模式 == == == == ==
    else if (ui->comboBox->currentIndex() == 1) {
        Q = "SELECT 教师姓名,教师工号,课程类型,课程名称,课程编号,课程学时,课程学分,课程代码,成绩 FROM StudentGetGradeMode WHERE 学生学号=" + ID;
        if (ui->lineEditCourseName->text() != "")
            Q += " AND 课程名称=\"" + ui->lineEditCourseName->text() + "\"";
        if (ui->lineEditTeacherName->text() != "")
            Q += " AND 教师姓名=\"" + ui->lineEditTeacherName->text() + "\"";
        if (ui->lineEditDownGrade->text() != "")
            Q += " AND 成绩>=" + ui->lineEditDownGrade->text();
        if (ui->lineEditUpGrade->text() != "")
            Q += " AND 成绩<=" + ui->lineEditUpGrade->text();
        if (ui->comboBoxCourseType->currentIndex() == 1)
            Q += " AND 课程类型=\"必修\"";
        if (ui->comboBoxCourseType->currentIndex() == 2)
            Q += " AND 课程类型=\"选修\"";
        if (ui->lineEditCourseCredit->text() != "")
            Q += " AND 课程学分=" + ui->lineEditCourseCredit->text();
    }
    Model->setQuery(Q);
    LastQuery = Q;
}
// == == == == == 双击666 == == == == ==
void FormStudentMode::on_tableView_doubleClicked(const QModelIndex &index) {
    // == == == == == 当前为选课模式 == == == == ==
    if (ui->comboBox->currentIndex() == 0) {
        QMessageBox MSGB;
        QModelIndex cNo = ProxyModel->index(index.row(), 7);
        MSGB.setText("确定要选择这门课程吗？");
        MSGB.setInformativeText("");
        MSGB.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        if (MSGB.exec() == QMessageBox::Yes) {
            QString Q = "INSERT INTO Study(sId,cNo) VALUES(" + ID + "," + cNo.data().toString() + ")";
            QSqlQuery SQ;
            if (!SQ.exec(Q))
                qDebug() << SQ.lastError();
            on_toolButtonReflash_clicked();
        }
    }
    // == == == == == 当前为查询模式 == == == == ==
    else if (ui->comboBox->currentIndex() == 1) {
        QMessageBox MSGB;
        QModelIndex cNo = ProxyModel->index(index.row(), 7);
        QModelIndex Grade = ProxyModel->index(index.row(), 8);
        if (Grade.data().toString() != "") {
            MSGB.setText("该门课已经结业，不能退课。");
            MSGB.setInformativeText("");
            MSGB.setStandardButtons(QMessageBox::Yes);
            MSGB.exec();
        } else if (Grade.data().toString() == "") {
            MSGB.setText("确定要退选这门课程吗？");
            MSGB.setInformativeText("");
            MSGB.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            if (MSGB.exec() == QMessageBox::Yes) {
                QString Q = "DELETE FROM Study WHERE sId=" + ID + " AND cNo=" + cNo.data().toString() + "";
                QSqlQuery SQ;
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
                on_toolButtonReflash_clicked();
            }
        }
    }
}
// == == == == == combobox改变模式 == == == == ==
void FormStudentMode::on_comboBox_currentIndexChanged(int index) {
    if (index == 0) {
        select_course_mode();
    } else if (index == 1) {
        get_grade_mode();
    }
}
