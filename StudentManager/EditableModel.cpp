#include "EditableModel.h"

// === === === === === EditableModel === === === === ===
EditableModel::EditableModel(QObject *parent) : QSqlQueryModel(parent) {
    this->setQuery("SELECT * FROM ManageStudentView");
}
//Sets the role data for the item at index to value.
bool EditableModel::setData(const QModelIndex &index, const QVariant &value, int /* role */) {
    if (MODE == 'S') {
        QModelIndex sIdIndex = QSqlQueryModel::index(index.row(), 0);
        QString sId = data(sIdIndex).toString();

        //Returns the data stored under the given role for the item referred to by the index.
        if (index.column() == 0) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Student SET sId= ? WHERE sId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageStudentView");
            return true;
        } else if (index.column() == 1) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Student SET sName= ? WHERE sId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageStudentView");
            return true;
        } else if (index.column() == 2) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Student SET sClass= ? WHERE sId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageStudentView");
            return true;
        } else if (index.column() == 3) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Student SET sMajor= ? WHERE sId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageStudentView");
            return true;
        }
    } else if (MODE == 'T') {
        QModelIndex sIdIndex = QSqlQueryModel::index(index.row(), 0);
        QString sId = data(sIdIndex).toString();
        //Returns the data stored under the given role for the item referred to by the index.
        if (index.column() == 0) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Teacher SET tId= ? WHERE tId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageTeacherView");
            return true;
        } else if (index.column() == 1) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Teacher SET tName= ? WHERE tId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageTeacherView");
            return true;
        }
    } else if (MODE == 'C') {
        QModelIndex sIdIndex = QSqlQueryModel::index(index.row(), 0);
        QString sId = data(sIdIndex).toString();
        //Returns the data stored under the given role for the item referred to by the index.
        if (index.column() == 0) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Course SET cId= ? WHERE cId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageCourseView");
            return true;
        } else if (index.column() == 1) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Course SET cName= ? WHERE cId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageCourseView");
            return true;
        } else if (index.column() == 2) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Course SET cCredit= ? WHERE cId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageCourseView");
            return true;
        } else if (index.column() == 3) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Course SET cTime= ? WHERE cId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageCourseView");
            return true;
        } else if (index.column() == 4) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Course SET cType= ? WHERE cId= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageCourseView");
            return true;
        }
    } else if (MODE == 'X') {
        QModelIndex sIdIndex = QSqlQueryModel::index(index.row(), 7);
        QString sId = data(sIdIndex).toString();
        if (index.column() == 0) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Teach SET tId= ? WHERE cNo= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageTeachView");
            return true;
        }
        if (index.column() == 1) {
            QSqlQuery SQ;
            SQ.prepare("UPDATE Teach SET cId= ? WHERE cNo= ?");
            SQ.addBindValue(value.toString());
            SQ.addBindValue(sId);
            if (!SQ.exec())
                return false;
            this->setQuery("SELECT * FROM ManageTeachView");
            return true;
        }
        if (index.column() != 0 || index.column() != 1)
            return false;
    } else if (MODE == 'G') {
        if (index.column() != 7) //当不为成绩列的时候
            return false;
        QModelIndex sIdIndex = QSqlQueryModel::index(index.row(), 0);
        QString sId = data(sIdIndex).toString();
        sIdIndex = QSqlQueryModel::index(index.row(), 6);
        QString cNo = data(sIdIndex).toString();
        QSqlQuery SQ;
        SQ.prepare("UPDATE Study SET Grade= ? WHERE cNo= ? AND sId= ? ");
        SQ.addBindValue(value.toString());
        SQ.addBindValue(cNo);
        SQ.addBindValue(sId);
        if (!SQ.exec())
            return false;
        QString Q = "SELECT 学生学号,学生姓名,学生班级,学生专业,课程名称,课程编号,课程代码,成绩 FROM TeacherGetGradeMode WHERE 教师工号=\"" + ID + "\"";
        this->setQuery(Q);
        return true;
    }
}

Qt::ItemFlags EditableModel::flags(const QModelIndex &index) const {
    Qt::ItemFlags flags = QSqlQueryModel::flags(index);
    if (this->MODE == 'X') {
        if (index.column() == 0 || index.column() == 1)
            flags |= Qt::ItemIsEditable;
        return flags;
    } else if (this->MODE == 'G') {
        if (index.column() == 7)
            flags |= Qt::ItemIsEditable;
        return flags;
    } else {
        flags |= Qt::ItemIsEditable;
        return flags;
    }
}
