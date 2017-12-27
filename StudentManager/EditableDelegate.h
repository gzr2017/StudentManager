#ifndef EDITABLEDELEGATE_H
#define EDITABLEDELEGATE_H

#include <QComboBox>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QStyledItemDelegate>
#include <QTableView>

class cTypeDelegate : public QStyledItemDelegate {
  Q_OBJECT
public:
  cTypeDelegate(QObject *parent = 0) : QStyledItemDelegate(parent) {}
  QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                        const QModelIndex &index) const;
  void setEditorData(QWidget *editor, const QModelIndex &index) const;
  void setModelData(QWidget *editor, QAbstractItemModel *model,
                    const QModelIndex &index) const;
  void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                            const QModelIndex &index) const {
    editor->setGeometry(option.rect);
  }
};

class tIdDelegate : public QStyledItemDelegate {
  Q_OBJECT
public:
  tIdDelegate(QObject *parent = 0) : QStyledItemDelegate(parent) {}
  QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                        const QModelIndex &index) const;
  void setEditorData(QWidget *editor, const QModelIndex &index) const;
  void setModelData(QWidget *editor, QAbstractItemModel *model,
                    const QModelIndex &index) const;
  void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                            const QModelIndex &index) const {
    editor->setGeometry(option.rect);
  }
};

class cIdDelegate : public QStyledItemDelegate {
  Q_OBJECT
public:
  cIdDelegate(QObject *parent = 0) : QStyledItemDelegate(parent) {}
  QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                        const QModelIndex &index) const;
  void setEditorData(QWidget *editor, const QModelIndex &index) const;
  void setModelData(QWidget *editor, QAbstractItemModel *model,
                    const QModelIndex &index) const;
  void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                            const QModelIndex &index) const {
    editor->setGeometry(option.rect);
  }
};

#endif // EDITABLEDELEGATE_H
