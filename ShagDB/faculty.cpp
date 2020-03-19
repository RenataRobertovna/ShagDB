#include "faculty.h"
#include "ui_faculty.h"

Faculty::Faculty(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Faculty)
{
    ui->setupUi(this);
}

Faculty::~Faculty()
{
    delete ui;
}
