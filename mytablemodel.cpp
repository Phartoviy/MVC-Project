
#include "mytablemodel.h"

MyTableModel::MyTableModel(QObject* parent) : QAbstractTableModel(parent)
{
    m_data = {
        { "Name", "Age" },
        { "John", 30 },
        { "Mary", 25 },
        { "Bob", 40 }
    };
}

int MyTableModel::rowCount(const QModelIndex& parent) const
{
    Q_UNUSED(parent);
    return m_data.size() - 1; // Учитываем только строки с данными, не считая заголовок
}

int MyTableModel::columnCount(const QModelIndex& parent) const
{
    Q_UNUSED(parent);
    return m_data.first().size();
}

QVariant MyTableModel::data(const QModelIndex& index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role == Qt::DisplayRole || role == Qt::EditRole)
        return m_data[index.row() + 1][index.column()]; // Учитываем только строки с данными, не считая заголовок

    return QVariant();
}
bool MyTableModel::setData(const QModelIndex& index, const QVariant& value, int role)
{
    if (index.isValid() && role == Qt::EditRole)
    {
        m_data[index.row() + 1][index.column()] = value.toString();
        emit dataChanged(index, index, { role });
        return true;
    }

    return false;
}

