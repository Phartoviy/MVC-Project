﻿
#ifndef MYTABLEMODEL_H
#define MYTABLEMODEL_H
#include <QAbstractTableModel>
#include <QList>
#include <QObject>


class MyTableModel : public QAbstractTableModel
{
public:
    MyTableModel(QObject* parent = nullptr);
    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    int columnCount(const QModelIndex& parent = QModelIndex()) const override;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::EditRole) override;



private:
    QList<QList<QVariant>> m_data;








};

#endif // MYTABLEMODEL_H