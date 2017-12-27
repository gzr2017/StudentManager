#include "FormTeacherMode.h"
#include "ui_FormTeacherMode.h"
#include <cmath>

FormTeacherMode::FormTeacherMode(QWidget *parent) : QWidget(parent),
                                                    ui(new Ui::FormTeacherMode) {
    ui->setupUi(this);
    Model = new EditableModel(this);
    ProxyModel = new QSortFilterProxyModel;
    ProxyModel->setSourceModel(Model);
    ui->tableView->setModel(ProxyModel);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSortingEnabled(true);
    ui->lineEditDownGrade->setValidator(Vsalidator);
    ui->lineEditUpGrade->setValidator(Vsalidator);
}

FormTeacherMode::~FormTeacherMode() {
    delete ui;
    if (Model)
        delete Model;
    if (ProxyModel)
        delete ProxyModel;
    delete Vsalidator;
}


void FormTeacherMode::init(const QString &I, const QString &N) {
    ID = I;
    QString Q = N + "老师欢迎你！";
    ui->labelWelcome->setText(Q);
    Q = "SELECT 学生学号,学生姓名,学生班级,学生专业,课程名称,课程编号,课程代码,成绩 FROM TeacherGetGradeMode WHERE 教师工号=\"" + ID + "\"";
    Model->setQuery(Q);
    LastQuery = Q;
    Model->set_mode('G');
    Model->set_ID(ID);
}

void FormTeacherMode::on_pushButtonEmpty_clicked() {
    ui->lineEditCourseId->setText("");
    ui->lineEditCourseName->setText("");
    ui->lineEditStudentClass->setText("");
    ui->lineEditStudentId->setText("");
    ui->lineEditStudentMajor->setText("");
    ui->lineEditStudentName->setText("");
    ui->comboBoxType->setCurrentIndex(0);
}

void FormTeacherMode::on_pushButtonQuery_clicked() {
    ui->labelStatus->setText("");
    QString Q = "SELECT 学生学号,学生姓名,学生班级,学生专业,课程名称,课程编号,课程代码,成绩 FROM TeacherGetGradeMode WHERE 教师工号=\"" + ID + "\"";
    if (ui->lineEditStudentClass->text() != "")
        Q = Q + " AND 学生班级=\"" + ui->lineEditStudentClass->text() + "\"";
    if (ui->lineEditStudentId->text() != "")
        Q = Q + " AND 学生学号=\"" + ui->lineEditStudentId->text() + "\"";
    if (ui->lineEditStudentMajor->text() != "")
        Q = Q + " AND 学生专业=\"" + ui->lineEditStudentMajor->text() + "\"";
    if (ui->lineEditStudentName->text() != "")
        Q = Q + " AND 学生姓名=\"" + ui->lineEditStudentName->text() + "\"";
    if (ui->lineEditCourseId->text() != "")
        Q = Q + " AND 课程编号=\"" + ui->lineEditCourseId->text() + "\"";
    if (ui->lineEditCourseName->text() != "")
        Q = Q + " AND 课程名称=\"" + ui->lineEditCourseName->text() + "\"";
    if (ui->comboBoxType->currentIndex() != 0)
        Q = Q + " AND 课程类型=\"" + ui->comboBoxType->currentText() + "\"";
    if (ui->lineEditDownGrade->text() != "")
        Q = Q + " AND 成绩>=" + ui->lineEditDownGrade->text();
    if (ui->lineEditUpGrade->text() != "")
        Q = Q + " AND 成绩<=" + ui->lineEditUpGrade->text();
    Model->setQuery(Q);
    LastQuery = Q;
}

void FormTeacherMode::calculate_average_score(const bool I) {
    if (I) {
        QString Q = "SELECT AVG(成绩)" + LastQuery.mid(44);
        QSqlQuery SQ;
        SQ.exec(Q);
        SQ.next();
        double AverageScore = SQ.value(0).toDouble();
        Q = "平均分为：" + QString::number(AverageScore);
        ui->labelStatus->setText(Q);
    }
}

void FormTeacherMode::calculate_passing_rate(const bool I) {
    if (I) {
        QString Q = "SELECT COUNT(成绩)" + LastQuery.mid(44) + " AND 成绩>=60";
        QSqlQuery SQ;
        SQ.exec(Q);
        SQ.next();
        double Pass = SQ.value(0).toDouble();
        Q = "SELECT COUNT(成绩)" + LastQuery.mid(44);
        SQ.exec(Q);
        SQ.next();
        double All = SQ.value(0).toDouble();
        Q = "通过率为：" + QString::number(Pass / All);
        ui->labelStatus->setText(Q);
    }
}

void FormTeacherMode::calculate_standard_deviation(const bool I) {
    if (I) {
        QString Q = "SELECT AVG(成绩)" + LastQuery.mid(44);
        QSqlQuery SQ;
        SQ.exec(Q);
        SQ.next();
        double AverageScore = SQ.value(0).toDouble();
        Q = "(成绩-" + QString::number(AverageScore) + ")";
        Q = Q + "*" + Q;
        Q = "SELECT AVG(" + Q + ")" + LastQuery.mid(44);
        SQ.exec(Q);
        SQ.next();
        double StandardDeviation = sqrt(SQ.value(0).toDouble());
        Q = "标准差为：" + QString::number(StandardDeviation);
        ui->labelStatus->setText(Q);
    }
}

void FormTeacherMode::on_toolButtonReflash_clicked() {
    Model->setQuery(LastQuery);
}
