#include "managers.h"
#include "ui_managers.h"

Managers::Managers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Managers)
{
    ui->setupUi(this);
}

Managers::~Managers()
{
    delete ui;
}
