/********************************************************************************
** Form generated from reading UI file 'FormManagerMode.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMANAGERMODE_H
#define UI_FORMMANAGERMODE_H

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

class Ui_FormManagerMode
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *labelWelcome;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_17;
    QComboBox *comboBox;
    QToolButton *toolButtonRefresh;
    QToolButton *toolButtonDelete;
    QToolButton *toolButtonAdd;
    QTableView *tableView;
    QWidget *StudentPart;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditStudentName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditStudentId;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditStudentClass;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditStudentMajor;
    QWidget *TeacherPart;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLineEdit *lineEditTeacherName;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLineEdit *lineEditTeacherId;
    QWidget *CoursePart;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEditCourseName;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEditCourseId;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLineEdit *lineEditCourseTime;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QLineEdit *lineEditCourseCredit;
    QComboBox *comboBoxType;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButtonQuery;
    QPushButton *pushButtonEmpty;

    void setupUi(QWidget *FormManagerMode)
    {
        if (FormManagerMode->objectName().isEmpty())
            FormManagerMode->setObjectName(QStringLiteral("FormManagerMode"));
        FormManagerMode->resize(430, 500);
        verticalLayout_3 = new QVBoxLayout(FormManagerMode);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelWelcome = new QLabel(FormManagerMode);
        labelWelcome->setObjectName(QStringLiteral("labelWelcome"));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        labelWelcome->setFont(font);
        labelWelcome->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelWelcome);

        label_2 = new QLabel(FormManagerMode);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        comboBox = new QComboBox(FormManagerMode);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_17->addWidget(comboBox);

        toolButtonRefresh = new QToolButton(FormManagerMode);
        toolButtonRefresh->setObjectName(QStringLiteral("toolButtonRefresh"));

        horizontalLayout_17->addWidget(toolButtonRefresh);

        toolButtonDelete = new QToolButton(FormManagerMode);
        toolButtonDelete->setObjectName(QStringLiteral("toolButtonDelete"));

        horizontalLayout_17->addWidget(toolButtonDelete);

        toolButtonAdd = new QToolButton(FormManagerMode);
        toolButtonAdd->setObjectName(QStringLiteral("toolButtonAdd"));

        horizontalLayout_17->addWidget(toolButtonAdd);


        verticalLayout_3->addLayout(horizontalLayout_17);

        tableView = new QTableView(FormManagerMode);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_3->addWidget(tableView);

        StudentPart = new QWidget(FormManagerMode);
        StudentPart->setObjectName(QStringLiteral("StudentPart"));
        verticalLayout = new QVBoxLayout(StudentPart);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(StudentPart);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditStudentName = new QLineEdit(StudentPart);
        lineEditStudentName->setObjectName(QStringLiteral("lineEditStudentName"));

        horizontalLayout->addWidget(lineEditStudentName);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(StudentPart);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEditStudentId = new QLineEdit(StudentPart);
        lineEditStudentId->setObjectName(QStringLiteral("lineEditStudentId"));

        horizontalLayout_2->addWidget(lineEditStudentId);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(StudentPart);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditStudentClass = new QLineEdit(StudentPart);
        lineEditStudentClass->setObjectName(QStringLiteral("lineEditStudentClass"));

        horizontalLayout_5->addWidget(lineEditStudentClass);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(StudentPart);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditStudentMajor = new QLineEdit(StudentPart);
        lineEditStudentMajor->setObjectName(QStringLiteral("lineEditStudentMajor"));

        horizontalLayout_6->addWidget(lineEditStudentMajor);


        horizontalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(StudentPart);

        TeacherPart = new QWidget(FormManagerMode);
        TeacherPart->setObjectName(QStringLiteral("TeacherPart"));
        horizontalLayout_13 = new QHBoxLayout(TeacherPart);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_11 = new QLabel(TeacherPart);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_14->addWidget(label_11);

        lineEditTeacherName = new QLineEdit(TeacherPart);
        lineEditTeacherName->setObjectName(QStringLiteral("lineEditTeacherName"));

        horizontalLayout_14->addWidget(lineEditTeacherName);


        horizontalLayout_13->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_12 = new QLabel(TeacherPart);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_15->addWidget(label_12);

        lineEditTeacherId = new QLineEdit(TeacherPart);
        lineEditTeacherId->setObjectName(QStringLiteral("lineEditTeacherId"));

        horizontalLayout_15->addWidget(lineEditTeacherId);


        horizontalLayout_13->addLayout(horizontalLayout_15);


        verticalLayout_3->addWidget(TeacherPart);

        CoursePart = new QWidget(FormManagerMode);
        CoursePart->setObjectName(QStringLiteral("CoursePart"));
        verticalLayout_2 = new QVBoxLayout(CoursePart);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(CoursePart);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEditCourseName = new QLineEdit(CoursePart);
        lineEditCourseName->setObjectName(QStringLiteral("lineEditCourseName"));

        horizontalLayout_8->addWidget(lineEditCourseName);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(CoursePart);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        lineEditCourseId = new QLineEdit(CoursePart);
        lineEditCourseId->setObjectName(QStringLiteral("lineEditCourseId"));

        horizontalLayout_9->addWidget(lineEditCourseId);


        horizontalLayout_7->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_9 = new QLabel(CoursePart);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_11->addWidget(label_9);

        lineEditCourseTime = new QLineEdit(CoursePart);
        lineEditCourseTime->setObjectName(QStringLiteral("lineEditCourseTime"));

        horizontalLayout_11->addWidget(lineEditCourseTime);


        horizontalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_10 = new QLabel(CoursePart);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_12->addWidget(label_10);

        lineEditCourseCredit = new QLineEdit(CoursePart);
        lineEditCourseCredit->setObjectName(QStringLiteral("lineEditCourseCredit"));

        horizontalLayout_12->addWidget(lineEditCourseCredit);

        comboBoxType = new QComboBox(CoursePart);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));

        horizontalLayout_12->addWidget(comboBoxType);


        horizontalLayout_10->addLayout(horizontalLayout_12);


        verticalLayout_2->addLayout(horizontalLayout_10);


        verticalLayout_3->addWidget(CoursePart);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        pushButtonQuery = new QPushButton(FormManagerMode);
        pushButtonQuery->setObjectName(QStringLiteral("pushButtonQuery"));

        horizontalLayout_16->addWidget(pushButtonQuery);

        pushButtonEmpty = new QPushButton(FormManagerMode);
        pushButtonEmpty->setObjectName(QStringLiteral("pushButtonEmpty"));

        horizontalLayout_16->addWidget(pushButtonEmpty);


        verticalLayout_3->addLayout(horizontalLayout_16);


        retranslateUi(FormManagerMode);

        QMetaObject::connectSlotsByName(FormManagerMode);
    } // setupUi

    void retranslateUi(QWidget *FormManagerMode)
    {
        FormManagerMode->setWindowTitle(QApplication::translate("FormManagerMode", "Form", nullptr));
        labelWelcome->setText(QApplication::translate("FormManagerMode", "\346\254\242\350\277\216\346\235\245\345\210\260\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QString());
        comboBox->setItemText(0, QApplication::translate("FormManagerMode", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        comboBox->setItemText(1, QApplication::translate("FormManagerMode", "\346\225\231\345\270\210\344\277\241\346\201\257", nullptr));
        comboBox->setItemText(2, QApplication::translate("FormManagerMode", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        comboBox->setItemText(3, QApplication::translate("FormManagerMode", "\350\257\276\347\250\213\345\256\211\346\216\222", nullptr));

        toolButtonRefresh->setText(QApplication::translate("FormManagerMode", "\345\210\267\346\226\260", nullptr));
        toolButtonDelete->setText(QApplication::translate("FormManagerMode", "\345\210\240\351\231\244", nullptr));
        toolButtonAdd->setText(QApplication::translate("FormManagerMode", "\346\267\273\345\212\240", nullptr));
        label_3->setText(QApplication::translate("FormManagerMode", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("FormManagerMode", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", nullptr));
        label_5->setText(QApplication::translate("FormManagerMode", "\345\255\246\347\224\237\347\217\255\347\272\247\357\274\232", nullptr));
        label_6->setText(QApplication::translate("FormManagerMode", "\345\255\246\347\224\237\344\270\223\344\270\232\357\274\232", nullptr));
        label_11->setText(QApplication::translate("FormManagerMode", "\346\225\231\345\270\210\345\247\223\345\220\215\357\274\232", nullptr));
        label_12->setText(QApplication::translate("FormManagerMode", "\346\225\231\345\270\210\345\267\245\345\217\267\357\274\232", nullptr));
        label_7->setText(QApplication::translate("FormManagerMode", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_8->setText(QApplication::translate("FormManagerMode", "\350\257\276\347\250\213\347\274\226\345\217\267\357\274\232", nullptr));
        label_9->setText(QApplication::translate("FormManagerMode", "\350\257\276\347\250\213\345\255\246\346\227\266\357\274\232", nullptr));
        label_10->setText(QApplication::translate("FormManagerMode", "\350\257\276\347\250\213\345\255\246\345\210\206\357\274\232", nullptr));
        comboBoxType->setItemText(0, QApplication::translate("FormManagerMode", "\346\227\240", nullptr));
        comboBoxType->setItemText(1, QApplication::translate("FormManagerMode", "\351\200\211\344\277\256", nullptr));
        comboBoxType->setItemText(2, QApplication::translate("FormManagerMode", "\345\277\205\344\277\256", nullptr));

        pushButtonQuery->setText(QApplication::translate("FormManagerMode", "\346\237\245\350\257\242", nullptr));
        pushButtonEmpty->setText(QApplication::translate("FormManagerMode", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormManagerMode: public Ui_FormManagerMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMANAGERMODE_H
