#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QDebug>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QWidget>

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget {
    Q_OBJECT
public:
    explicit LoginWidget(QWidget *parent = 0);
    ~LoginWidget();

    void login_mode();           //登录模式
    void change_password_mode(); //更改密码模式

private slots:
    void on_pushButtonExit_clicked();           //退出按钮按下
    void on_pushButtonBack_clicked();           //返回按钮按下
    void on_pushButtonChangePassword_clicked(); //更改密码按钮按下
    void on_pushButtonLogin_clicked();          //登录按钮按下

    void on_lineEditPassword_returnPressed();
    void on_lineEditId_returnPressed();
    void on_pushButtonConfirm_clicked();

private:
    Ui::LoginWidget *ui;
signals:
    void login_successfully(const bool I); //成功登录信号
    void login_id(const QString &I);       //发送 ID
    void login_identity(const char I);     //发送登录者身份
};

#endif // LOGINWIDGET_H
