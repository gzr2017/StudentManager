/********************************************************************************
** Form generated from reading UI file 'FormTeacherMode.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTEACHERMODE_H
#define UI_FORMTEACHERMODE_H

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

class Ui_FormTeacherMode
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *labelWelcome;
    QHBoxLayout *horizontalLayout_15;
    QLabel *labelStatus;
    QToolButton *toolButtonReflash;
    QTableView *tableView;
    QWidget *StudentPart;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditStudentName;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditStudentId;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEditStudentClass;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEditStudentMajor;
    QWidget *CoursePart;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEditCourseName;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *lineEditCourseId;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QLineEdit *lineEditDownGrade;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QLineEdit *lineEditUpGrade;
    QComboBox *comboBoxType;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButtonQuery;
    QPushButton *pushButtonEmpty;

    void setupUi(QWidget *FormTeacherMode)
    {
        if (FormTeacherMode->objectName().isEmpty())
            FormTeacherMode->setObjectName(QStringLiteral("FormTeacherMode"));
        FormTeacherMode->resize(485, 443);
        verticalLayout_3 = new QVBoxLayout(FormTeacherMode);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelWelcome = new QLabel(FormTeacherMode);
        labelWelcome->setObjectName(QStringLiteral("labelWelcome"));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        labelWelcome->setFont(font);
        labelWelcome->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelWelcome);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        labelStatus = new QLabel(FormTeacherMode);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        horizontalLayout_15->addWidget(labelStatus);

        toolButtonReflash = new QToolButton(FormTeacherMode);
        toolButtonReflash->setObjectName(QStringLiteral("toolButtonReflash"));

        horizontalLayout_15->addWidget(toolButtonReflash);


        verticalLayout_3->addLayout(horizontalLayout_15);

        tableView = new QTableView(FormTeacherMode);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_3->addWidget(tableView);

        StudentPart = new QWidget(FormTeacherMode);
        StudentPart->setObjectName(QStringLiteral("StudentPart"));
        verticalLayout = new QVBoxLayout(StudentPart);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(StudentPart);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditStudentName = new QLineEdit(StudentPart);
        lineEditStudentName->setObjectName(QStringLiteral("lineEditStudentName"));

        horizontalLayout_2->addWidget(lineEditStudentName);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(StudentPart);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditStudentId = new QLineEdit(StudentPart);
        lineEditStudentId->setObjectName(QStringLiteral("lineEditStudentId"));

        horizontalLayout->addWidget(lineEditStudentId);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(StudentPart);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEditStudentClass = new QLineEdit(StudentPart);
        lineEditStudentClass->setObjectName(QStringLiteral("lineEditStudentClass"));

        horizontalLayout_5->addWidget(lineEditStudentClass);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(StudentPart);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEditStudentMajor = new QLineEdit(StudentPart);
        lineEditStudentMajor->setObjectName(QStringLiteral("lineEditStudentMajor"));

        horizontalLayout_6->addWidget(lineEditStudentMajor);


        horizontalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(StudentPart);

        CoursePart = new QWidget(FormTeacherMode);
        CoursePart->setObjectName(QStringLiteral("CoursePart"));
        verticalLayout_2 = new QVBoxLayout(CoursePart);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(CoursePart);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        lineEditCourseName = new QLineEdit(CoursePart);
        lineEditCourseName->setObjectName(QStringLiteral("lineEditCourseName"));

        horizontalLayout_8->addWidget(lineEditCourseName);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_7 = new QLabel(CoursePart);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        lineEditCourseId = new QLineEdit(CoursePart);
        lineEditCourseId->setObjectName(QStringLiteral("lineEditCourseId"));

        horizontalLayout_9->addWidget(lineEditCourseId);


        horizontalLayout_7->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_8 = new QLabel(CoursePart);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_11->addWidget(label_8);

        lineEditDownGrade = new QLineEdit(CoursePart);
        lineEditDownGrade->setObjectName(QStringLiteral("lineEditDownGrade"));

        horizontalLayout_11->addWidget(lineEditDownGrade);


        horizontalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_9 = new QLabel(CoursePart);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_12->addWidget(label_9);

        lineEditUpGrade = new QLineEdit(CoursePart);
        lineEditUpGrade->setObjectName(QStringLiteral("lineEditUpGrade"));

        horizontalLayout_12->addWidget(lineEditUpGrade);

        comboBoxType = new QComboBox(CoursePart);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));

        horizontalLayout_12->addWidget(comboBoxType);


        horizontalLayout_10->addLayout(horizontalLayout_12);


        verticalLayout_2->addLayout(horizontalLayout_10);


        verticalLayout_3->addWidget(CoursePart);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        pushButtonQuery = new QPushButton(FormTeacherMode);
        pushButtonQuery->setObjectName(QStringLiteral("pushButtonQuery"));

        horizontalLayout_13->addWidget(pushButtonQuery);

        pushButtonEmpty = new QPushButton(FormTeacherMode);
        pushButtonEmpty->setObjectName(QStringLiteral("pushButtonEmpty"));

        horizontalLayout_13->addWidget(pushButtonEmpty);


        verticalLayout_3->addLayout(horizontalLayout_13);


        retranslateUi(FormTeacherMode);

        QMetaObject::connectSlotsByName(FormTeacherMode);
    } // setupUi

    void retranslateUi(QWidget *FormTeacherMode)
    {
        FormTeacherMode->setWindowTitle(QApplication::translate("FormTeacherMode", "Form", nullptr));
        labelWelcome->setText(QApplication::translate("FormTeacherMode", "\350\200\201\345\270\210\357\274\214\346\254\242\350\277\216\346\202\250\357\274\201", nullptr));
        labelStatus->setText(QString());
        toolButtonReflash->setText(QApplication::translate("FormTeacherMode", "\345\210\267\346\226\260", nullptr));
        label_3->setText(QApplication::translate("FormTeacherMode", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label->setText(QApplication::translate("FormTeacherMode", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("FormTeacherMode", "\345\255\246\347\224\237\347\217\255\347\272\247\357\274\232", nullptr));
        label_5->setText(QApplication::translate("FormTeacherMode", "\345\255\246\347\224\237\344\270\223\344\270\232\357\274\232", nullptr));
        label_6->setText(QApplication::translate("FormTeacherMode", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_7->setText(QApplication::translate("FormTeacherMode", "\350\257\276\347\250\213\347\274\226\345\217\267\357\274\232", nullptr));
        label_8->setText(QApplication::translate("FormTeacherMode", "\345\210\206\346\225\260\344\273\216\357\274\232", nullptr));
        label_9->setText(QApplication::translate("FormTeacherMode", "\345\210\260", nullptr));
        comboBoxType->setItemText(0, QApplication::translate("FormTeacherMode", "\346\227\240", nullptr));
        comboBoxType->setItemText(1, QApplication::translate("FormTeacherMode", "\345\277\205\344\277\256", nullptr));
        comboBoxType->setItemText(2, QApplication::translate("FormTeacherMode", "\351\200\211\344\277\256", nullptr));

        pushButtonQuery->setText(QApplication::translate("FormTeacherMode", "\346\237\245\350\257\242", nullptr));
        pushButtonEmpty->setText(QApplication::translate("FormTeacherMode", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTeacherMode: public Ui_FormTeacherMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTEACHERMODE_H
