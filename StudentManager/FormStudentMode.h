#ifndef FORMSTUDENTMODE_H
#define FORMSTUDENTMODE_H

#include <QDebug>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QStandardItem>
#include <QValidator>
#include <QWidget>
namespace Ui {
class FormStudentMode;
}

class FormStudentMode : public QWidget {
    Q_OBJECT

    QSqlQueryModel *Model;
    QString ID;
    QSortFilterProxyModel *ProxyModel;
    QValidator *Vsalidator = new QIntValidator(0, 100, this);
    QString LastQuery;

public:
    explicit FormStudentMode(QWidget *parent = 0);
    ~FormStudentMode();
    void init(const QString &I, const QString &N);

    void select_course_mode();
    void get_grade_mode();

private slots:
    void on_toolButtonReflash_clicked();

    void on_pushButtonEmpty_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);


    void on_comboBox_currentIndexChanged(int index);

    void on_pushButtonQuery_clicked();

private:
    Ui::FormStudentMode *ui;
};















#endif // FORMSTUDENTMODE_H
