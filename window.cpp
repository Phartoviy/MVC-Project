
#include "window.h"
#include "./ui_window.h"


Window::Window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);

    model->setHeaderData(0,Qt::Horizontal,"Passport",Qt::EditRole);


    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->hide();






}

Window::~Window()
{
    delete ui;
}


