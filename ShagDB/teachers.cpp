#include "teachers.h"
#include "ui_teachers.h"

Teachers::Teachers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Teachers)
{
    ui->setupUi(this);
}

Teachers::~Teachers()
{
    delete ui;
}
