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
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

private:
    QList<QList<QVariant>> m_data;
    QString headerDataTitle[2] = {"Константа паспорта", "Значение"};








};

#endif // MYTABLEMODEL_H
