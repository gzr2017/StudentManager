#ifndef EDITABLEMODEL_H
#define EDITABLEMODEL_H

#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>

class EditableModel : public QSqlQueryModel {
    Q_OBJECT
    char MODE = 'P';
    QString ID;

public:
    Qt::ItemFlags flags(const QModelIndex &index) const override;
    EditableModel(QObject *parent = 0);
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    char get_mode() {
        return MODE;
    }
    void set_ID(QString &I) {
        ID = I;
    }

    void set_mode(const char I) {
        MODE = I;
        if (I == 'S')
            this->setQuery("SELECT * FROM ManageStudentView");
        else if (I == 'T')
            this->setQuery("SELECT * FROM ManageTeacherView");
        else if (I == 'C')
            this->setQuery("SELECT * FROM ManageCourseView");
        else if (I == 'X')
            this->setQuery("SELECT * FROM Teach");
        else if (I == 'G')
            this->setQuery("SELECT 学生学号,学生姓名,学生班级,学生专业,课程名称,课程编号,课程代码,成绩 FROM TeacherGetGradeMode");
        else if (I == 'P')
            this->setQuery("");
    }
};




#endif // EDITABLEMODEL_H
