
#ifndef WINDOW_H
#define WINDOW_H

#include <QDialog>
#include "mytablemodel.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QDialog

{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();

private:
    Ui::Window *ui;
    MyTableModel *model = new MyTableModel();
};

#endif // WINDOW_H
