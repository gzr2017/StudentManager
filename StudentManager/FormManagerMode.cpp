#include "FormManagerMode.h"
#include "ui_FormManagerMode.h"

// === === === === === 基础函数 === === === === ===
FormManagerMode::FormManagerMode(QWidget *parent) : QWidget(parent), ui(new Ui::FormManagerMode), CTD(new cTypeDelegate(this)), TID(new tIdDelegate(this)), CID(new cIdDelegate(this)) {
    ui->setupUi(this);
    Model = new EditableModel(this);
    ProxyModel = new QSortFilterProxyModel;
    ProxyModel->setSourceModel(Model);
    ui->tableView->setModel(ProxyModel);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSortingEnabled(true);
    student_information_mode();
}
FormManagerMode::~FormManagerMode() {
    delete ui;
    delete CTD;
    delete TID;
    delete CID;
}
void FormManagerMode::init(const QString &I) {
    ID = I;
    QString Q = "现在以" + ID + "的身份登录";
    ui->labelWelcome->setText(Q);
    student_information_mode();
}
// === === === === === 模式 === === === === ===
void FormManagerMode::student_information_mode() {
    ui->tableView->setItemDelegateForColumn(0, NULL);
    ui->tableView->setItemDelegateForColumn(1, NULL);
    ui->tableView->setItemDelegateForColumn(4, NULL);
    Model->set_mode('S');
    Model->setQuery("SELECT * FROM ManageStudentView");
    ui->TeacherPart->setDisabled(true);
    ui->CoursePart->setDisabled(true);
    ui->StudentPart->setDisabled(false);
}
void FormManagerMode::teacher_information_mode() {
    ui->tableView->setItemDelegateForColumn(0, NULL);
    ui->tableView->setItemDelegateForColumn(1, NULL);
    ui->tableView->setItemDelegateForColumn(4, NULL);
    Model->set_mode('T');
    Model->setQuery("SELECT * FROM ManageTeacherView WHERE 教师工号 IS NOT \"0\"");
    ui->TeacherPart->setDisabled(false);
    ui->CoursePart->setDisabled(true);
    ui->StudentPart->setDisabled(true);
}
void FormManagerMode::course_information_mode() {
    ui->tableView->setItemDelegateForColumn(0, NULL);
    ui->tableView->setItemDelegateForColumn(1, NULL);
    ui->tableView->setItemDelegateForColumn(4, CTD);
    Model->set_mode('C');
    Model->setQuery("SELECT * FROM ManageCourseView WHERE 课程编号 IS NOT \"0\"");
    ui->TeacherPart->setDisabled(true);
    ui->CoursePart->setDisabled(false);
    ui->StudentPart->setDisabled(true);
}
void FormManagerMode::teach_mode() {
    ui->tableView->setItemDelegateForColumn(0, TID);
    ui->tableView->setItemDelegateForColumn(1, CID);
    ui->tableView->setItemDelegateForColumn(4, NULL);
    Model->set_mode('X');
    Model->setQuery("SELECT * FROM ManageTeachView");
    ui->TeacherPart->setDisabled(false);
    ui->CoursePart->setDisabled(false);
    ui->StudentPart->setDisabled(true);
}
// === === === === === 功能实现 === === === === ===
void FormManagerMode::on_comboBox_currentIndexChanged(int index) {
    if (index == 0)
        student_information_mode();
    else if (index == 1)
        teacher_information_mode();
    else if (index == 2)
        course_information_mode();
    else if (index == 3)
        teach_mode();
}
void FormManagerMode::on_toolButtonAdd_clicked() {
    if (Model->get_mode() == 'S') {
        QSqlQuery SQ;
        SQ.exec("INSERT INTO Student(sId) VALUES (\" \")");
        Model->setQuery("SELECT * FROM ManageStudentView"); //插入新的一行
        ui->tableView->selectRow(ui->tableView->model()->rowCount() - 1);
        ui->tableView->scrollToBottom();
    } else if (Model->get_mode() == 'T') {
        QSqlQuery SQ;
        SQ.exec("INSERT INTO Teacher(tId) VALUES (\" \")");
        Model->setQuery("SELECT * FROM ManageTeacherView WHERE 教师工号 IS NOT 0");
        ui->tableView->selectRow(ui->tableView->model()->rowCount() - 1);
        ui->tableView->scrollToBottom();
    } else if (Model->get_mode() == 'C') {
        QSqlQuery SQ;
        SQ.exec("INSERT INTO Course(cId) VALUES (\" \")");
        Model->setQuery("SELECT * FROM ManageCourseView WHERE 课程编号 IS NOT 0");
        ui->tableView->selectRow(ui->tableView->model()->rowCount() - 1);
        ui->tableView->scrollToBottom();
    } else if (Model->get_mode() == 'X') {
        QSqlQuery SQ;
        SQ.exec("INSERT INTO Teach(cNo,tId,cId) VALUES(NULL,0,0)");
        Model->setQuery("SELECT * FROM ManageTeachView");
        ui->tableView->selectRow(ui->tableView->model()->rowCount() - 1);
        ui->tableView->scrollToBottom();
    }
}
void FormManagerMode::on_toolButtonRefresh_clicked() {
    if (Model->get_mode() == 'S') {
        Model->setQuery("SELECT * FROM ManageStudentView");
        ui->tableView->scrollToTop();
    } else if (Model->get_mode() == 'T') {
        Model->setQuery("SELECT * FROM ManageTeacherView");
        ui->tableView->scrollToTop();
    } else if (Model->get_mode() == 'C') {
        Model->setQuery("SELECT * FROM ManageCourseView");
        ui->tableView->scrollToTop();
    } else if (Model->get_mode() == 'X') {
        Model->setQuery("SELECT * FROM ManageTeachView");
        ui->tableView->scrollToTop();
    }
}
void FormManagerMode::on_toolButtonDelete_clicked() {
    QModelIndexList IndexList = ui->tableView->selectionModel()->selectedRows();
    if (Model->get_mode() == 'S') {
        QMessageBox MSGB;
        MSGB.setText("确定要删除这些学生信息吗？");
        MSGB.setInformativeText("");
        MSGB.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        if (MSGB.exec() == QMessageBox::Yes) {
            QSqlQuery SQ;
            QString Q;
            for (int i = 0; i < IndexList.size(); ++i) {
                Q = "DELETE FROM Study WHERE sId=" + IndexList.at(i).data(0).toString();
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
                Q = "DELETE FROM Student WHERE sId=" + IndexList.at(i).data(0).toString();
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
            }
            on_toolButtonRefresh_clicked();
        }
    } else if (Model->get_mode() == 'T') {
        QMessageBox MSGB;
        MSGB.setText("确定要删除这些教师信息吗？");
        MSGB.setInformativeText("");
        MSGB.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        if (MSGB.exec() == QMessageBox::Yes) {
            QSqlQuery SQ;
            QString Q;
            for (int i = 0; i < IndexList.size(); ++i) {
                Q = "DELETE FROM Study WHERE cNo IN(SELECT cNo FROM Teach WHERE tId=" + IndexList.at(i).data(0).toString() + ")";
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
                Q = "DELETE FROM Teach WHERE tId=" + ProxyModel->index(IndexList.at(i).row(), 0).data().toString();
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
                Q = "DELETE FROM Teacher WHERE tId=" + ProxyModel->index(IndexList.at(i).row(), 0).data().toString();
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
            }
            on_toolButtonRefresh_clicked();
        }
    } else if (Model->get_mode() == 'C') {
        QMessageBox MSGB;
        MSGB.setText("确定要删除该课程信息吗？");
        MSGB.setInformativeText("");
        MSGB.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        if (MSGB.exec() == QMessageBox::Yes) {
            QSqlQuery SQ;
            QString Q;
            for (int i = 0; i < IndexList.size(); ++i) {
                Q = "DELETE FROM Study WHERE cNo IN(SELECT cNo FROM Teach WHERE cId=" + IndexList.at(i).data(0).toString() + ")";
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
                Q = "DELETE FROM Teach WHERE cId=" + ProxyModel->index(IndexList.at(i).row(), 0).data().toString();
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
                Q = "DELETE FROM Course WHERE cId=" + ProxyModel->index(IndexList.at(i).row(), 0).data().toString();
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
            }
            on_toolButtonRefresh_clicked();
        }
    } else if (Model->get_mode() == 'X') {
        QMessageBox MSGB;
        MSGB.setText("确定要删除该教学信息吗？");
        MSGB.setInformativeText("");
        MSGB.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        if (MSGB.exec() == QMessageBox::Yes) {
            QSqlQuery SQ;
            QString Q;
            for (int i = 0; i < IndexList.size(); ++i) {
                Q = "DELETE FROM Study WHERE cNo=" + ProxyModel->index(IndexList.at(i).row(), 7).data().toString();
                qDebug() << Q;
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
                Q = "DELETE FROM Teach WHERE cNo=" + ProxyModel->index(IndexList.at(i).row(), 7).data().toString();
                qDebug() << Q;
                if (!SQ.exec(Q))
                    qDebug() << SQ.lastError();
            }
            on_toolButtonRefresh_clicked();
        }
    }
}
void FormManagerMode::on_pushButtonQuery_clicked() {
    if (ui->comboBox->currentIndex() == 0) {
        bool F = false;
        QString Q = "SELECT * FROM ManageStudentView";
        if (ui->lineEditStudentClass->text() != "") {
            if (!F)
                Q = Q + " WHERE 学生班级=\"" + ui->lineEditStudentClass->text() + "\"";
            else
                Q = Q + " AND 学生班级=\"" + ui->lineEditStudentClass->text() + "\"";
            F = true;
        }
        if (ui->lineEditStudentId->text() != "") {
            if (!F)
                Q = Q + " WHERE 学生学号=\"" + ui->lineEditStudentId->text() + "\"";
            else
                Q = Q + " AND 学生学号=\"" + ui->lineEditStudentId->text() + "\"";
            F = true;
        }
        if (ui->lineEditStudentMajor->text() != "") {
            if (!F)
                Q = Q + " WHERE 学生专业=\"" + ui->lineEditStudentMajor->text() + "\"";
            else
                Q = Q + " AND 学生专业=\"" + ui->lineEditStudentMajor->text() + "\"";
            F = true;
        }
        if (ui->lineEditStudentName->text() != "") {
            if (!F)
                Q = Q + " WHERE 学生姓名=\"" + ui->lineEditStudentName->text() + "\"";
            else
                Q = Q + " AND 学生姓名=\"" + ui->lineEditStudentName->text() + "\"";
            F = true;
        }
        Model->setQuery(Q);
        LastQuery = Q;
    } else if (ui->comboBox->currentIndex() == 1) {
        bool F = false;
        QString Q = "SELECT * FROM ManageTeacherView";
        if (ui->lineEditTeacherId->text() != "") {
            if (!F)
                Q = Q + " WHERE 教师工号=\"" + ui->lineEditTeacherId->text() + "\"";
            else
                Q = Q + " AND 教师工号=\"" + ui->lineEditTeacherId->text() + "\"";
            F = true;
        }
        if (ui->lineEditTeacherName->text() != "") {
            if (!F)
                Q = Q + " WHERE 教师姓名=\"" + ui->lineEditTeacherName->text() + "\"";
            else
                Q = Q + " AND 教师姓名=\"" + ui->lineEditTeacherName->text() + "\"";
            F = true;
        }
        Model->setQuery(Q);
        LastQuery = Q;
    } else if (ui->comboBox->currentIndex() == 2) {
        bool F = false;
        QString Q = "SELECT * FROM ManageCourseView";
        if (ui->lineEditCourseCredit->text() != "") {
            if (!F)
                Q = Q + " WHERE 课程学分=\"" + ui->lineEditCourseCredit->text() + "\"";
            else
                Q = Q + " AND 课程学分=\"" + ui->lineEditCourseCredit->text() + "\"";
            F = true;
        }
        if (ui->lineEditCourseId->text() != "") {
            if (!F)
                Q = Q + " WHERE 课程编号=\"" + ui->lineEditCourseId->text() + "\"";
            else
                Q = Q + " AND 课程编号=\"" + ui->lineEditCourseId->text() + "\"";
            F = true;
        }
        if (ui->lineEditCourseName->text() != "") {
            if (!F)
                Q = Q + " WHERE 课程名称=\"" + ui->lineEditCourseName->text() + "\"";
            else
                Q = Q + " AND 课程名称=\"" + ui->lineEditCourseName->text() + "\"";
            F = true;
        }
        if (ui->lineEditCourseTime->text() != "") {
            if (!F)
                Q = Q + " WHERE 课程学时=\"" + ui->lineEditCourseTime->text() + "\"";
            else
                Q = Q + " AND 课程学时=\"" + ui->lineEditCourseTime->text() + "\"";
            F = true;
        }
        if (ui->comboBoxType->currentIndex() != 0) {
            if (!F)
                Q = Q + " WHERE 课程类型=\"" + ui->comboBoxType->currentText() + "\"";
            else
                Q = Q + " AND 课程类型=\"" + ui->comboBoxType->currentText() + "\"";
            F = true;
        }
        Model->setQuery(Q);
        LastQuery = Q;
    } else if (ui->comboBox->currentIndex() == 3) {
        bool F = false;
        QString Q = "SELECT * FROM ManageTeachView";
        if (ui->lineEditCourseCredit->text() != "") {
            if (!F)
                Q = Q + " WHERE 课程学分=\"" + ui->lineEditCourseCredit->text() + "\"";
            else
                Q = Q + " AND 课程学分=\"" + ui->lineEditCourseCredit->text() + "\"";
            F = true;
        }
        if (ui->lineEditCourseId->text() != "") {
            if (!F)
                Q = Q + " WHERE 课程编号=\"" + ui->lineEditCourseId->text() + "\"";
            else
                Q = Q + " AND 课程编号=\"" + ui->lineEditCourseId->text() + "\"";
            F = true;
        }
        if (ui->lineEditCourseName->text() != "") {
            if (!F)
                Q = Q + " WHERE 课程名称=\"" + ui->lineEditCourseName->text() + "\"";
            else
                Q = Q + " AND 课程名称=\"" + ui->lineEditCourseName->text() + "\"";
            F = true;
        }
        if (ui->lineEditCourseTime->text() != "") {
            if (!F)
                Q = Q + " WHERE 课程学时=\"" + ui->lineEditCourseTime->text() + "\"";
            else
                Q = Q + " AND 课程学时=\"" + ui->lineEditCourseTime->text() + "\"";
            F = true;
        }
        if (ui->comboBoxType->currentIndex() != 0) {
            if (!F)
                Q = Q + " WHERE 课程类型=\"" + ui->comboBoxType->currentText() + "\"";
            else
                Q = Q + " AND 课程类型=\"" + ui->comboBoxType->currentText() + "\"";
            F = true;
        }
        if (ui->lineEditTeacherId->text() != "") {
            if (!F)
                Q = Q + " WHERE 教师工号=\"" + ui->lineEditTeacherId->text() + "\"";
            else
                Q = Q + " AND 教师工号=\"" + ui->lineEditTeacherId->text() + "\"";
            F = true;
        }
        if (ui->lineEditTeacherName->text() != "") {
            if (!F)
                Q = Q + " WHERE 教师姓名=\"" + ui->lineEditTeacherName->text() + "\"";
            else
                Q = Q + " AND 教师姓名=\"" + ui->lineEditTeacherName->text() + "\"";
            F = true;
        }
        Model->setQuery(Q);
        LastQuery = Q;
    }
}

void FormManagerMode::on_pushButtonEmpty_clicked() {
    ui->lineEditCourseCredit->setText("");
    ui->lineEditCourseId->setText("");
    ui->lineEditCourseName->setText("");
    ui->lineEditCourseTime->setText("");
    ui->lineEditStudentClass->setText("");
    ui->lineEditStudentId->setText("");
    ui->lineEditStudentMajor->setText("");
    ui->lineEditStudentName->setText("");
    ui->lineEditTeacherId->setText("");
    ui->lineEditTeacherName->setText("");
    ui->comboBoxType->setCurrentIndex(0);
}
