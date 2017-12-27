#ifndef FORMTEACHERMODE_H
#define FORMTEACHERMODE_H

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
#include <QValidator>
#include <QWidget>

namespace Ui {
class FormTeacherMode;
}

class FormTeacherMode : public QWidget {
    Q_OBJECT

    EditableModel *Model;
    QSqlRelationalTableModel *Model1;
    QString ID;
    QSortFilterProxyModel *ProxyModel;
    QValidator *Vsalidator = new QIntValidator(0, 100, this);

    QString LastQuery;

public:
    explicit FormTeacherMode(QWidget *parent = 0);
    ~FormTeacherMode();
    void init(const QString &I, const QString &N);
    void calculate_average_score(const bool I);
    void calculate_passing_rate(const bool I);
    void calculate_standard_deviation(const bool I);
private slots:
    void on_pushButtonEmpty_clicked();

    void on_pushButtonQuery_clicked();

    void on_toolButtonReflash_clicked();

private:
    Ui::FormTeacherMode *ui;
};

#endif // FORMTEACHERMODE_H
