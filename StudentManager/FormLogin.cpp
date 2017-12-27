#include "FormLogin.h"
#include "ui_FormLogin.h"

LoginWidget::LoginWidget(QWidget *parent) : QWidget(parent),
                                            ui(new Ui::LoginWidget) {
    ui->setupUi(this);
    ui->labelWelcome->setText("登录学生成绩管理系统");
    ui->labelStatus->setText("如果忘记密码的话，请找管理员！");
    ui->LoginModeButton->show();
    ui->ChangePasswordModeButton->hide();
    ui->ChangePasswordModeEdit->hide();
}

LoginWidget::~LoginWidget() {
    delete ui;
}

void LoginWidget::login_mode() {
    ui->lineEditPassword->setText("");
    ui->lineEditNewPassword->setText("");
    ui->lineEditRepeatNewPassword->setText("");
    ui->labelWelcome->setText("登录学生成绩管理系统");
    ui->labelStatus->setText("如果忘记密码的话，请找管理员！");
    ui->LoginModeButton->show();
    ui->ChangePasswordModeButton->hide();
    ui->ChangePasswordModeEdit->hide();
}
void LoginWidget::change_password_mode() {
    ui->lineEditPassword->setText("");
    ui->lineEditNewPassword->setText("");
    ui->lineEditRepeatNewPassword->setText("");
    ui->labelWelcome->setText("修改密码");
    ui->labelStatus->setText("如果忘记密码的话，请找管理员！");
    ui->LoginModeButton->hide();
    ui->ChangePasswordModeButton->show();
    ui->ChangePasswordModeEdit->show();
}

void LoginWidget::on_pushButtonExit_clicked() {
    QCoreApplication::exit();
}

void LoginWidget::on_pushButtonBack_clicked() {
    login_mode();
}

void LoginWidget::on_pushButtonChangePassword_clicked() {
    change_password_mode();
}

void LoginWidget::on_pushButtonLogin_clicked() {
    QString Q;
    QSqlQuery SQ;
    if (ui->comboBox->currentText() == "我是学生") {
        Q = "SELECT sPassword FROM Student WHERE sId=\"" + ui->lineEditId->text() + "\"";
        if (!SQ.exec(Q)) {
            qDebug() << SQ.lastError();
            ui->labelStatus->setText("数据库错误，请联系管理员！");
        } else {
            if (!SQ.next())
                ui->labelStatus->setText("账号输入有误，请重新输入！");
            else {
                if (ui->lineEditPassword->text() == SQ.value(0).toString()) {
                    emit login_id(ui->lineEditId->text());
                    emit login_identity('S');
                    emit login_successfully(true);
                } else
                    ui->labelStatus->setText("密码输入错误！");
            }
        }

    } else if (ui->comboBox->currentText() == "我是老师") {
        Q = "SELECT tPassword FROM Teacher WHERE tId=\"" + ui->lineEditId->text() + "\"";

        if (!SQ.exec(Q)) {
            qDebug() << SQ.lastError();
            ui->labelStatus->setText("数据库错误，请联系管理员！");
        } else {
            if (!SQ.next())
                ui->labelStatus->setText("账号输入有误，请重新输入！");
            else {
                if (ui->lineEditPassword->text() == SQ.value(0).toString()) {
                    emit login_id(ui->lineEditId->text());
                    emit login_identity('T');
                    emit login_successfully(true);
                } else
                    ui->labelStatus->setText("密码输入错误！");
            }
        }

    } else if (ui->comboBox->currentText() == "我是管理员") {
        Q = "SELECT mPassword FROM Manager WHERE mId=\"" + ui->lineEditId->text() + "\"";
        if (!SQ.exec(Q)) {
            qDebug() << SQ.lastError();
            ui->labelStatus->setText("数据库错误，请联系管理员！");
        } else {
            if (!SQ.next())
                ui->labelStatus->setText("账号输入有误，请重新输入！");
            else {
                if (ui->lineEditPassword->text() == SQ.value(0).toString()) {
                    emit login_id(ui->lineEditId->text());
                    emit login_identity('M');
                    emit login_successfully(true);
                } else
                    ui->labelStatus->setText("密码输入错误！");
            }
        }
    }
}

void LoginWidget::on_lineEditPassword_returnPressed() {
    on_pushButtonLogin_clicked();
}
void LoginWidget::on_lineEditId_returnPressed() {
    ui->lineEditPassword->setFocus();
}

void LoginWidget::on_pushButtonConfirm_clicked() {
    QString Q;
    QSqlQuery SQ;
    if (ui->comboBox->currentText() == "我是学生") {
        Q = "SELECT sPassword FROM Student WHERE sId=\"" + ui->lineEditId->text() + "\"";
        if (!SQ.exec(Q)) {
            qDebug() << SQ.lastError();
            ui->labelStatus->setText("数据库错误，请联系管理员！");
        } else {
            if (!SQ.next())
                ui->labelStatus->setText("账号输入有误，请重新输入！");
            else {
                if (ui->lineEditPassword->text() == SQ.value(0).toString()) {
                    if (ui->lineEditNewPassword->text() == ui->lineEditRepeatNewPassword->text()) {
                        Q = "UPDATE Student SET sPassword=\"" + ui->lineEditNewPassword->text() + "\" WHERE sId=\"" + ui->lineEditId->text() + "\"";
                        SQ.exec(Q);
                        login_mode();
                    } else
                        ui->labelStatus->setText("两次输入密码不一致！");
                } else
                    ui->labelStatus->setText("密码输入错误！");
            }
        }

    } else if (ui->comboBox->currentText() == "我是老师") {
        Q = "SELECT tPassword FROM Teacher WHERE tId=\"" + ui->lineEditId->text() + "\"";

        if (!SQ.exec(Q)) {
            qDebug() << SQ.lastError();
            ui->labelStatus->setText("数据库错误，请联系管理员！");
        } else {
            if (!SQ.next())
                ui->labelStatus->setText("账号输入有误，请重新输入！");
            else {
                if (ui->lineEditPassword->text() == SQ.value(0).toString()) {
                    if (ui->lineEditNewPassword->text() == ui->lineEditRepeatNewPassword->text()) {
                        Q = "UPDATE Teacher SET tPassword=\"" + ui->lineEditNewPassword->text() + "\" WHERE tId=\"" + ui->lineEditId->text() + "\"";
                        SQ.exec(Q);
                        login_mode();
                    } else
                        ui->labelStatus->setText("两次输入密码不一致！");
                } else
                    ui->labelStatus->setText("密码输入错误！");
            }
        }

    } else if (ui->comboBox->currentText() == "我是管理员") {
        Q = "SELECT mPassword FROM Manager WHERE mId=\"" + ui->lineEditId->text() + "\"";
        if (!SQ.exec(Q)) {
            qDebug() << SQ.lastError();
            ui->labelStatus->setText("数据库错误，请联系管理员！");
        } else {
            if (!SQ.next())
                ui->labelStatus->setText("账号输入有误，请重新输入！");
            else {
                if (ui->lineEditPassword->text() == SQ.value(0).toString()) {
                    if (ui->lineEditNewPassword->text() == ui->lineEditRepeatNewPassword->text()) {
                        Q = "UPDATE Manager SET mPassword=\"" + ui->lineEditNewPassword->text() + "\" WHERE mId=\"" + ui->lineEditId->text() + "\"";
                        SQ.exec(Q);
                        login_mode();
                    } else
                        ui->labelStatus->setText("两次输入密码不一致！");
                } else
                    ui->labelStatus->setText("密码输入错误！");
            }
        }
    }
}
