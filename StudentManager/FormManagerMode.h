#ifndef FORMMANAGERMODE_H
#define FORMMANAGERMODE_H

#include "EditableDelegate.h"
#include "EditableModel.h"
#include <QDebug>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRelationalDelegate>
#include <QSqlRelationalTableModel>
#include <QStandardItem>
#include <QWidget>



namespace Ui {
class FormManagerMode;
}

class FormManagerMode : public QWidget {
    Q_OBJECT
    EditableModel *Model;
    QSqlRelationalTableModel *Model1;
    QString ID;
    QSortFilterProxyModel *ProxyModel;

    cTypeDelegate *CTD;
    tIdDelegate *TID;
    cIdDelegate *CID;
    QString LastQuery;

public:
    explicit FormManagerMode(QWidget *parent = 0);
    ~FormManagerMode();

    void init(const QString &I);

    void student_information_mode();
    void teacher_information_mode();
    void course_information_mode();
    void teach_mode();
private slots:
    void on_comboBox_currentIndexChanged(int index);
    void on_toolButtonAdd_clicked();


    void on_toolButtonRefresh_clicked();

    void on_toolButtonDelete_clicked();

    void on_pushButtonQuery_clicked();

    void on_pushButtonEmpty_clicked();

private:
    Ui::FormManagerMode *ui;
};






#endif // FORMMANAGERMODE_H
