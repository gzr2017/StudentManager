/********************************************************************************
** Form generated from reading UI file 'FormStudentMode.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSTUDENTMODE_H
#define UI_FORMSTUDENTMODE_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormStudentMode
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelWelcome;
    QLabel *labelStatus;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QToolButton *toolButtonReflash;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditTeacherName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *lineEditCourseName;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLineEdit *lineEditCourseCredit;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEditDownGrade;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEditUpGrade;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxCourseType;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButtonQuery;
    QPushButton *pushButtonEmpty;

    void setupUi(QWidget *FormStudentMode)
    {
        if (FormStudentMode->objectName().isEmpty())
            FormStudentMode->setObjectName(QStringLiteral("FormStudentMode"));
        FormStudentMode->resize(512, 401);
        verticalLayout = new QVBoxLayout(FormStudentMode);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelWelcome = new QLabel(FormStudentMode);
        labelWelcome->setObjectName(QStringLiteral("labelWelcome"));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        labelWelcome->setFont(font);
        labelWelcome->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelWelcome);

        labelStatus = new QLabel(FormStudentMode);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        verticalLayout->addWidget(labelStatus);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        comboBox = new QComboBox(FormStudentMode);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        toolButtonReflash = new QToolButton(FormStudentMode);
        toolButtonReflash->setObjectName(QStringLiteral("toolButtonReflash"));

        horizontalLayout_2->addWidget(toolButtonReflash);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(FormStudentMode);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(FormStudentMode);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditTeacherName = new QLineEdit(FormStudentMode);
        lineEditTeacherName->setObjectName(QStringLiteral("lineEditTeacherName"));

        horizontalLayout_3->addWidget(lineEditTeacherName);


        horizontalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(FormStudentMode);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        lineEditCourseName = new QLineEdit(FormStudentMode);
        lineEditCourseName->setObjectName(QStringLiteral("lineEditCourseName"));

        horizontalLayout_7->addWidget(lineEditCourseName);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_7 = new QLabel(FormStudentMode);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_10->addWidget(label_7);

        lineEditCourseCredit = new QLineEdit(FormStudentMode);
        lineEditCourseCredit->setObjectName(QStringLiteral("lineEditCourseCredit"));

        horizontalLayout_10->addWidget(lineEditCourseCredit);


        horizontalLayout_8->addLayout(horizontalLayout_10);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(FormStudentMode);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEditDownGrade = new QLineEdit(FormStudentMode);
        lineEditDownGrade->setObjectName(QStringLiteral("lineEditDownGrade"));

        horizontalLayout_5->addWidget(lineEditDownGrade);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(FormStudentMode);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEditUpGrade = new QLineEdit(FormStudentMode);
        lineEditUpGrade->setObjectName(QStringLiteral("lineEditUpGrade"));

        horizontalLayout_6->addWidget(lineEditUpGrade);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBoxCourseType = new QComboBox(FormStudentMode);
        comboBoxCourseType->addItem(QString());
        comboBoxCourseType->addItem(QString());
        comboBoxCourseType->addItem(QString());
        comboBoxCourseType->setObjectName(QStringLiteral("comboBoxCourseType"));

        horizontalLayout->addWidget(comboBoxCourseType);


        horizontalLayout_6->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButtonQuery = new QPushButton(FormStudentMode);
        pushButtonQuery->setObjectName(QStringLiteral("pushButtonQuery"));

        horizontalLayout_9->addWidget(pushButtonQuery);

        pushButtonEmpty = new QPushButton(FormStudentMode);
        pushButtonEmpty->setObjectName(QStringLiteral("pushButtonEmpty"));

        horizontalLayout_9->addWidget(pushButtonEmpty);


        verticalLayout->addLayout(horizontalLayout_9);


        retranslateUi(FormStudentMode);

        QMetaObject::connectSlotsByName(FormStudentMode);
    } // setupUi

    void retranslateUi(QWidget *FormStudentMode)
    {
        FormStudentMode->setWindowTitle(QApplication::translate("FormStudentMode", "Form", nullptr));
        labelWelcome->setText(QApplication::translate("FormStudentMode", "\345\220\214\345\255\246\346\254\242\350\277\216\344\275\240", nullptr));
        labelStatus->setText(QString());
        comboBox->setItemText(0, QApplication::translate("FormStudentMode", "\351\200\211\350\257\276", nullptr));
        comboBox->setItemText(1, QApplication::translate("FormStudentMode", "\346\237\245\350\257\242\346\210\220\347\273\251\345\222\214\345\267\262\351\200\211\350\257\276\347\250\213", nullptr));

        toolButtonReflash->setText(QApplication::translate("FormStudentMode", "\345\210\267\346\226\260", nullptr));
        label_3->setText(QApplication::translate("FormStudentMode", "\346\225\231\345\270\210\345\247\223\345\220\215\357\274\232", nullptr));
        label_6->setText(QApplication::translate("FormStudentMode", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_7->setText(QApplication::translate("FormStudentMode", "\350\257\276\347\250\213\345\255\246\345\210\206\357\274\232", nullptr));
        label_4->setText(QApplication::translate("FormStudentMode", "\345\210\206\346\225\260\344\273\216\357\274\232", nullptr));
        label_5->setText(QApplication::translate("FormStudentMode", "\345\210\260", nullptr));
        comboBoxCourseType->setItemText(0, QApplication::translate("FormStudentMode", "\346\227\240", nullptr));
        comboBoxCourseType->setItemText(1, QApplication::translate("FormStudentMode", "\345\277\205\344\277\256", nullptr));
        comboBoxCourseType->setItemText(2, QApplication::translate("FormStudentMode", "\351\200\211\344\277\256", nullptr));

        pushButtonQuery->setText(QApplication::translate("FormStudentMode", "\346\237\245\350\257\242", nullptr));
        pushButtonEmpty->setText(QApplication::translate("FormStudentMode", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormStudentMode: public Ui_FormStudentMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSTUDENTMODE_H
