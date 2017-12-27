/********************************************************************************
** Form generated from reading UI file 'FormLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLOGIN_H
#define UI_FORMLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QLabel *labelWelcome;
    QLabel *labelStatus;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditId;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEditPassword;
    QWidget *ChangePasswordModeEdit;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelNewPassword;
    QLineEdit *lineEditNewPassword;
    QHBoxLayout *horizontalLayout_14;
    QLabel *labelRepeatNewPassword;
    QLineEdit *lineEditRepeatNewPassword;
    QWidget *ChangePasswordModeButton;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonBack;
    QWidget *LoginModeButton;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonChangePassword;
    QPushButton *pushButtonExit;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QStringLiteral("LoginWidget"));
        LoginWidget->resize(456, 379);
        verticalLayout_5 = new QVBoxLayout(LoginWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelWelcome = new QLabel(LoginWidget);
        labelWelcome->setObjectName(QStringLiteral("labelWelcome"));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        labelWelcome->setFont(font);
        labelWelcome->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelWelcome);

        labelStatus = new QLabel(LoginWidget);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        verticalLayout_5->addWidget(labelStatus);

        comboBox = new QComboBox(LoginWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_5->addWidget(comboBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(LoginWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditId = new QLineEdit(LoginWidget);
        lineEditId->setObjectName(QStringLiteral("lineEditId"));

        horizontalLayout->addWidget(lineEditId);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(LoginWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        lineEditPassword = new QLineEdit(LoginWidget);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout);

        ChangePasswordModeEdit = new QWidget(LoginWidget);
        ChangePasswordModeEdit->setObjectName(QStringLiteral("ChangePasswordModeEdit"));
        verticalLayout_4 = new QVBoxLayout(ChangePasswordModeEdit);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labelNewPassword = new QLabel(ChangePasswordModeEdit);
        labelNewPassword->setObjectName(QStringLiteral("labelNewPassword"));

        horizontalLayout_10->addWidget(labelNewPassword);

        lineEditNewPassword = new QLineEdit(ChangePasswordModeEdit);
        lineEditNewPassword->setObjectName(QStringLiteral("lineEditNewPassword"));
        lineEditNewPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_10->addWidget(lineEditNewPassword);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        labelRepeatNewPassword = new QLabel(ChangePasswordModeEdit);
        labelRepeatNewPassword->setObjectName(QStringLiteral("labelRepeatNewPassword"));

        horizontalLayout_14->addWidget(labelRepeatNewPassword);

        lineEditRepeatNewPassword = new QLineEdit(ChangePasswordModeEdit);
        lineEditRepeatNewPassword->setObjectName(QStringLiteral("lineEditRepeatNewPassword"));
        lineEditRepeatNewPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_14->addWidget(lineEditRepeatNewPassword);


        verticalLayout_4->addLayout(horizontalLayout_14);


        verticalLayout_5->addWidget(ChangePasswordModeEdit);

        ChangePasswordModeButton = new QWidget(LoginWidget);
        ChangePasswordModeButton->setObjectName(QStringLiteral("ChangePasswordModeButton"));
        horizontalLayout_15 = new QHBoxLayout(ChangePasswordModeButton);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        pushButtonConfirm = new QPushButton(ChangePasswordModeButton);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));

        horizontalLayout_15->addWidget(pushButtonConfirm);

        pushButtonBack = new QPushButton(ChangePasswordModeButton);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));

        horizontalLayout_15->addWidget(pushButtonBack);


        verticalLayout_5->addWidget(ChangePasswordModeButton);

        LoginModeButton = new QWidget(LoginWidget);
        LoginModeButton->setObjectName(QStringLiteral("LoginModeButton"));
        horizontalLayout_16 = new QHBoxLayout(LoginModeButton);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        pushButtonLogin = new QPushButton(LoginModeButton);
        pushButtonLogin->setObjectName(QStringLiteral("pushButtonLogin"));

        horizontalLayout_16->addWidget(pushButtonLogin);

        pushButtonChangePassword = new QPushButton(LoginModeButton);
        pushButtonChangePassword->setObjectName(QStringLiteral("pushButtonChangePassword"));

        horizontalLayout_16->addWidget(pushButtonChangePassword);

        pushButtonExit = new QPushButton(LoginModeButton);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));

        horizontalLayout_16->addWidget(pushButtonExit);


        verticalLayout_5->addWidget(LoginModeButton);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QApplication::translate("LoginWidget", "Form", nullptr));
        labelWelcome->setText(QApplication::translate("LoginWidget", "\346\254\242\350\277\216\346\235\245\345\210\260\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237\357\274\214\350\257\267\345\205\210\347\231\273\345\275\225\357\274\201", nullptr));
        labelStatus->setText(QApplication::translate("LoginWidget", "\345\246\202\346\236\234\345\277\230\350\256\260\345\257\206\347\240\201\347\232\204\350\257\235\357\274\214\350\257\267\346\211\276\347\256\241\347\220\206\345\221\230\357\274\201", nullptr));
        comboBox->setItemText(0, QApplication::translate("LoginWidget", "\346\210\221\346\230\257\345\255\246\347\224\237", nullptr));
        comboBox->setItemText(1, QApplication::translate("LoginWidget", "\346\210\221\346\230\257\350\200\201\345\270\210", nullptr));
        comboBox->setItemText(2, QApplication::translate("LoginWidget", "\346\210\221\346\230\257\347\256\241\347\220\206\345\221\230", nullptr));

        label_2->setText(QApplication::translate("LoginWidget", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_8->setText(QApplication::translate("LoginWidget", "\345\257\206\347\240\201\357\274\232", nullptr));
        labelNewPassword->setText(QApplication::translate("LoginWidget", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        labelRepeatNewPassword->setText(QApplication::translate("LoginWidget", "\351\207\215\345\244\215\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        pushButtonConfirm->setText(QApplication::translate("LoginWidget", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        pushButtonBack->setText(QApplication::translate("LoginWidget", "\350\277\224\345\233\236", nullptr));
        pushButtonLogin->setText(QApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
        pushButtonChangePassword->setText(QApplication::translate("LoginWidget", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        pushButtonExit->setText(QApplication::translate("LoginWidget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOGIN_H
