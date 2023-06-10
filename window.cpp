
#include "window.h"
#include "./ui_window.h"


Window::Window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);


    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->hide();






}

Window::~Window()
{
    delete ui;
}


