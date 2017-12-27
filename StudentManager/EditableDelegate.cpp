#include "EditableDelegate.h"

QWidget *cTypeDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem & /*option*/, const QModelIndex & /*index*/) const {
    QComboBox *TypeSelector = new QComboBox(parent);
    TypeSelector->addItem("必修");
    TypeSelector->addItem("选修");
    return TypeSelector;
}

void cTypeDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const {
    QString Value = index.model()->data(index, Qt::EditRole).toString();
    QComboBox *TypeSelector = static_cast<QComboBox *>(editor);
    TypeSelector->setCurrentText(Value);
}

void cTypeDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
    QComboBox *TypeSelector = static_cast<QComboBox *>(editor);
    QString Value = TypeSelector->currentText();
    model->setData(index, Value, Qt::EditRole);
}
// === === === === === tIdDelegate === === === === ===
QWidget *tIdDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem & /*option*/, const QModelIndex & /*index*/) const {
    QComboBox *tIdSelector = new QComboBox(parent);
    QSqlQueryModel *TeacherInformation = new QSqlQueryModel();
    TeacherInformation->setQuery("select tName from ManageTeachView1 WHERE tId IS NOT \"0\"");
    tIdSelector->setModel(TeacherInformation);
    return tIdSelector;
}
void tIdDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const {
    QString Value = index.model()->data(index, Qt::EditRole).toString();
    QComboBox *tIdSelector = static_cast<QComboBox *>(editor);
    tIdSelector->setCurrentText(Value);
}
void tIdDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
    QComboBox *tIdSelector = static_cast<QComboBox *>(editor);

    QString Value = tIdSelector->currentText();
    QStringList RealValue = Value.split(" ");
    model->setData(index, RealValue[0], Qt::EditRole);
}
// === === === === === cIdDelegate === === === === ===
QWidget *cIdDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem & /*option*/, const QModelIndex & /*index*/) const {
    QComboBox *tIdSelector = new QComboBox(parent);
    QSqlQueryModel *TeacherInformation = new QSqlQueryModel();
    TeacherInformation->setQuery("select cName from ManageTeachView2  WHERE cId IS NOT \"0\"");
    tIdSelector->setModel(TeacherInformation);
    return tIdSelector;
}
void cIdDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const {
    QString Value = index.model()->data(index, Qt::EditRole).toString();
    QComboBox *tIdSelector = static_cast<QComboBox *>(editor);
    tIdSelector->setCurrentText(Value);
}
void cIdDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
    QComboBox *tIdSelector = static_cast<QComboBox *>(editor);
    QString Value = tIdSelector->currentText();
    QStringList RealValue = Value.split(" ");
    model->setData(index, RealValue[0], Qt::EditRole);
}
