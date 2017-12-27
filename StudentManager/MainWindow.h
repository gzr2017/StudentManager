#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "FormLogin.h"
#include "FormManagerMode.h"
#include "FormStudentMode.h"
#include "FormTeacherMode.h"
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

    QSqlDatabase DATABASE; //数据库
    QString ID;            //保存现在登录用户的ID
    char IDENTITY = 'P';   //现在登录用户的身份。S：学生；T：教师；M：管理员；P：未知
    bool LOGIN = false;    //现在登录状态，真为登录，假为未登录。

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void logout_mode();  //打开登录界面
    void student_mode(); //打开学生登陆之后的界面
    void teacher_mode(); //打开教师登陆之后的界面
    void manager_mode(); //打开管理员登录之后的界面

    void set_id(const QString &I);   //设置登录用户的ID
    void set_identity(const char I); //设置登录用户的身份
    void set_mode(const bool I);     //设置模式：学生模式/教师模式/管理员模式/登录模式

private slots:
    void on_actionReadStudent_triggered(); //读取学生信息菜单被点击
    void on_actionReadCourse_triggered();  //读取课程信息菜单被点击
    void on_actionReadTeach_triggered();   //读取教学信息菜单被点击
    void on_actionReadTeacher_triggered(); //读取教师信息菜单被点击
    void on_actionReadStudy_triggered();   //读取学生选课信息菜单被点击

    void on_actionExit_triggered();   //退出程序菜单被点击
    void on_actionLogout_triggered(); //注销菜单被点击

    void on_actionAverageScore_triggered();      //计算平均分菜单被点击
    void on_actionPassingRate_triggered();       //计算通过率菜单被点击
    void on_actionStandardDeviation_triggered(); //计算标准差菜单被点击

private:
    Ui::MainWindow *ui;
signals:
    void start_calculate_average_score(const bool I);      //由于显示的分数只有```FormTeacherMode```知道，所以向```FormTeacherMode```发送信号，要求计算平均分
    void start_calculate_passing_rate(const bool I);       //同```start_calculate_average_score```
    void start_standard_deviation(const bool I);           //同```start_calculate_average_score```
    void start_calculate_standard_deviation(const bool I); //同```start_calculate_average_score```
};

#endif // MAINWINDOW_H
