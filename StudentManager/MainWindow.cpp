#include "MainWindow.h"
#include "ui_MainWindow.h"

// === === === === === 基础函数 === === === === ===
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), DATABASE(QSqlDatabase::addDatabase("QSQLITE")), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    DATABASE.setDatabaseName("/Users/guozirui/Documents/OneDrive/code/C++/Qt/StudentManager/StudentManager/STUDENT.db");
    if (!DATABASE.open()) {
        QMessageBox::warning(this, "错误！", "未能正确加载数据库！", QMessageBox::Ok, QMessageBox::Ok);
    } else
        logout_mode();
}
MainWindow::~MainWindow() {
    if (!this->centralWidget())
        delete this->centralWidget();
    delete ui;
}

void MainWindow::set_id(const QString &I) {
    ID = I;
}
void MainWindow::set_identity(const char I) {
    IDENTITY = I;
}
void MainWindow::set_mode(const bool I) {
    LOGIN = true;
    if (I) {
        if (IDENTITY == 'S')
            student_mode();
        else if (IDENTITY == 'T')
            teacher_mode();
        else if (IDENTITY == 'M')
            manager_mode();
    }
}
// === === === === === 模式 === === === === ===
void MainWindow::logout_mode() {
    if (!LOGIN && IDENTITY == 'P') {
        ui->actionLogout->setDisabled(true);
        ui->actionReadCourse->setDisabled(true);
        ui->actionReadDatabase->setDisabled(true);
        ui->actionReadStudent->setDisabled(true);
        ui->actionReadStudy->setDisabled(true);
        ui->actionReadTeach->setDisabled(true);
        ui->actionReadTeacher->setDisabled(true);
        ui->actionAverageScore->setDisabled(true);
        ui->actionPassingRate->setDisabled(true);
        ui->actionStandardDeviation->setDisabled(true);

        if (!this->centralWidget())
            delete this->centralWidget();
        LoginWidget *LW = new LoginWidget(this);
        QObject::connect(LW, &LoginWidget::login_successfully, this, &MainWindow::set_mode);
        QObject::connect(LW, &LoginWidget::login_id, this, &MainWindow::set_id);
        QObject::connect(LW, &LoginWidget::login_identity, this, &MainWindow::set_identity);
        this->setCentralWidget(LW);
    }
}
void MainWindow::manager_mode() {
    if (LOGIN && IDENTITY == 'M') {
        ui->actionLogout->setDisabled(false);
        ui->actionReadCourse->setDisabled(false);
        ui->actionReadDatabase->setDisabled(false);
        ui->actionReadStudent->setDisabled(false);
        ui->actionReadStudy->setDisabled(false);
        ui->actionReadTeach->setDisabled(false);
        ui->actionReadTeacher->setDisabled(false);
        ui->actionAverageScore->setDisabled(true);
        ui->actionPassingRate->setDisabled(true);
        ui->actionStandardDeviation->setDisabled(true);
        if (!this->centralWidget())
            delete this->centralWidget();
        FormManagerMode *MW = new FormManagerMode(this);
        this->setCentralWidget(MW);
        MW->init(ID);
    }
}
void MainWindow::student_mode() {
    if (LOGIN && IDENTITY == 'S') {
        QString Q = "SELECT sName FROM Student WHERE sId=\"" + ID + "\"";
        QSqlQuery SQ;
        if (SQ.exec(Q)) {
            while (SQ.next())
                Q = SQ.value(0).toString();
            ui->actionLogout->setDisabled(false);
            ui->actionReadCourse->setDisabled(true);
            ui->actionReadDatabase->setDisabled(true);
            ui->actionReadStudent->setDisabled(true);
            ui->actionReadStudy->setDisabled(true);
            ui->actionReadTeach->setDisabled(true);
            ui->actionReadTeacher->setDisabled(true);
            ui->actionAverageScore->setDisabled(true);
            ui->actionPassingRate->setDisabled(true);
            ui->actionStandardDeviation->setDisabled(true);
            if (!this->centralWidget())
                delete this->centralWidget();
            FormStudentMode *SW = new FormStudentMode(this);
            this->setCentralWidget(SW);
            SW->init(ID, Q);
        } else {
            QMessageBox::warning(this, "错误！", "未能正确登录！", QMessageBox::Ok, QMessageBox::Ok);
        }
    }
}
void MainWindow::teacher_mode() {
    if (LOGIN && IDENTITY == 'T') {
        ui->actionLogout->setDisabled(false);
        ui->actionReadCourse->setDisabled(true);
        ui->actionReadDatabase->setDisabled(true);
        ui->actionReadStudent->setDisabled(true);
        ui->actionReadStudy->setDisabled(true);
        ui->actionReadTeach->setDisabled(true);
        ui->actionReadTeacher->setDisabled(true);
        ui->actionAverageScore->setDisabled(false);
        ui->actionPassingRate->setDisabled(false);
        ui->actionStandardDeviation->setDisabled(false);
        if (!this->centralWidget())
            delete this->centralWidget();
        FormTeacherMode *TW = new FormTeacherMode(this);
        QObject::connect(this, &MainWindow::start_calculate_average_score, TW, &FormTeacherMode::calculate_average_score);
        QObject::connect(this, &MainWindow::start_calculate_passing_rate, TW, &FormTeacherMode::calculate_passing_rate);
        QObject::connect(this, &MainWindow::start_calculate_standard_deviation, TW, &FormTeacherMode::calculate_standard_deviation);

        this->setCentralWidget(TW);
        QString Q = "SELECT tName FROM Teacher WHERE tId=\"" + ID + "\"";
        QSqlQuery SQ;
        if (SQ.exec(Q)) {
            while (SQ.next())
                Q = SQ.value(0).toString();
            TW->init(ID, Q);
        }
    }
}
// === === === === === triggers === === === === ===
// == == == == == 读取文件 == == == == ==
void MainWindow::on_actionReadStudent_triggered() {
    QString FilePath = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    QFile F(FilePath);
    if (!F.open((QIODevice::ReadOnly | QIODevice::Text))) {
        QMessageBox::warning(this, "错误！", "文件读取失败！", QMessageBox::Yes, QMessageBox::Yes);
        return;
    }
    QTextStream Student(&F);
    QString Id, Name, Class, Major, Q;
    QSqlQuery SQ;
    while (!Student.atEnd()) {
        Student >> Id;
        Student >> Name;
        Student >> Class;
        Student >> Major;
        if (Id == "#END" || Id == "#学号(ID)")
            continue;
        Q = "INSERT INTO Student(sId,sName,sClass,sMajor) VALUES(\"" + Id +
            "\",\"" + Name + "\",\"" + Class + "\",\"" + Major + "\");";
        if (!SQ.exec(Q)) {
            qDebug() << SQ.lastError();
            QString Infor = Name + "同学信息插入失败！插入信息如下：";
            QMessageBox::warning(this, Infor, Infor, QMessageBox::Yes);
        }
    }
    F.close();
}
void MainWindow::on_actionReadCourse_triggered() {
    QString FilePath = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    QFile F(FilePath);
    if (!F.open((QIODevice::ReadOnly | QIODevice::Text))) {
        QMessageBox::warning(this, "错误！", "文件读取失败！", QMessageBox::Yes, QMessageBox::Yes);
        return;
    }
    QTextStream Course(&F);
    QString Id, Name, Credit, Time, Type, Q;
    QSqlQuery SQ;
    while (!Course.atEnd()) {
        Course >> Id;
        Course >> Name;
        Course >> Credit;
        Course >> Time;
        Course >> Type;
        if (Id == "#课程编号" || Id == "#END")
            continue;
        Q = "INSERT INTO Course VALUES(\"" + Id + "\",\"" + Name + "\"," +
            Credit + "," + Time + ",\"" + Type + "\");";
        if (!SQ.exec(Q)) {
            qDebug() << SQ.lastError();
            QString Infor = Name + "课程信息插入失败！插入信息如下：";
            QMessageBox::warning(this, Infor, Infor, QMessageBox::Yes);
        }
    }
    F.close();
}
void MainWindow::on_actionReadTeach_triggered() {
    QString FilePath = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    QFile F(FilePath);
    if (!F.open((QIODevice::ReadOnly | QIODevice::Text))) {
        QMessageBox::warning(this, "错误！", "文件读取失败！", QMessageBox::Yes, QMessageBox::Yes);
        return;
    }
    QTextStream Teach(&F);
    QString tId, //教师工号
        cName,   //课程名称
        Q,       //查询语句
        Row;     //一行
    QString Nothing;
    QSqlQuery SQ;
    Row = Teach.readLine();
    while (!Teach.atEnd() || tId != "#END") {
        Row = Teach.readLine();
        QTextStream Infor(&Row);
        Infor >> tId;
        Infor >> Nothing;
        while (!Infor.atEnd()) {
            Infor >> cName;
            QString cId;
            Q = "SELECT cId FROM Course WHERE cName=\"" + cName + "\";";
            if (!SQ.exec(Q))
                return;
            while (SQ.next()) {
                cId = SQ.value(0).toString();
            }
            Q = "INSERT INTO Teach(cId,tId) VALUES(\"" + cId + "\",\"" + tId +
                "\");";
            if (!SQ.exec(Q)) {
                qDebug() << SQ.lastError();
                QString Infor = Nothing + "老师的" + cName + "课程信息插入失败！插入信息如下：";
                QMessageBox::warning(this, Infor, Infor, QMessageBox::Yes);
            }
        }
    }
    F.close();
}
void MainWindow::on_actionReadTeacher_triggered() {
    QString FilePath = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    QFile F(FilePath);
    if (!F.open((QIODevice::ReadOnly | QIODevice::Text))) {
        QMessageBox::warning(this, "错误！", "文件读取失败！", QMessageBox::Yes, QMessageBox::Yes);
        return;
    }
    QTextStream Teacher(&F);
    QString Id, //教师工号
        Name,   //教师姓名
        Row,    //读取一行
        Course, //课程名称
        Q;      //查询语句
    QSqlQuery SQ;
    while (!Teacher.atEnd()) {
        Row = Teacher.readLine();
        QTextStream Infor(&Row);
        Infor >> Id;
        Infor >> Name;
        if (Id != "#工号（ID）" && Id != "#END") {
            Q = "INSERT INTO Teacher(tId,tName) VALUES (\"" + Id + "\",\"" + Name +
                "\");";
            if (!SQ.exec(Q)) {
                qDebug() << SQ.lastError();
                QString Infor = Name + "教师信息插入失败！插入信息如下：";
                QMessageBox::warning(this, Infor, Infor, QMessageBox::Yes);
            }
        }
    }
    F.close();
}
void MainWindow::on_actionReadStudy_triggered() {
    QString FilePath = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    QFile F(FilePath);
    if (!F.open((QIODevice::ReadOnly | QIODevice::Text))) {
        QMessageBox::warning(this, "错误！", "文件读取失败！", QMessageBox::Yes, QMessageBox::Yes);
        return;
    }
    QTextStream Study(&F);
    QString sId, cName, Grade, Q, Row, Nothing;
    QSqlQuery SQ;
    Row = Study.readLine();
    while (!Study.atEnd()) {
        Row = Study.readLine();
        QTextStream Infor(&Row);
        Infor >> sId;
        if (sId == "#END")
            break;
        Infor >> Nothing;
        Infor >> cName;
        Infor >> Grade;
        QString cNo;
        Q = "SELECT cNo FROM Course,Teach WHERE Course.cId=Teach.cId AND cName=\"" + cName + "\";";
        qDebug() << Q << endl;
        if (!SQ.exec(Q))
            return;
        while (SQ.next()) {
            cNo = SQ.value(0).toString();
        }
        qDebug() << cNo << endl;
        Q = "INSERT INTO Study VALUES(\"" + sId + "\"," + cNo + "," + Grade +
            ");";
        if (!SQ.exec(Q)) {
            qDebug() << Q << endl;
            qDebug() << SQ.lastError();
            QString Infor = Nothing + "同学" + cName + "课程信息插入失败！";
            QMessageBox::warning(this, Infor, Infor, QMessageBox::Yes);
        }
    }
    F.close();
}
// == == == == == 退出程序 == == == == ==
void MainWindow::on_actionExit_triggered() {
    QCoreApplication::exit();
}
// == == == == == 登出 == == == == ==
void MainWindow::on_actionLogout_triggered() {
    IDENTITY = 'P';
    ID = "";
    LOGIN = false;
    logout_mode();
}

void MainWindow::on_actionAverageScore_triggered() {
    emit start_calculate_average_score(true);
}

void MainWindow::on_actionPassingRate_triggered() {
    emit start_calculate_passing_rate(true);
}

void MainWindow::on_actionStandardDeviation_triggered() {
    emit start_calculate_standard_deviation(true);
}
