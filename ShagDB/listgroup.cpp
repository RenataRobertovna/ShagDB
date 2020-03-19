#include "listgroup.h"
#include "ui_listgroup.h"

ListGroup::ListGroup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListGroup)
{
    ui->setupUi(this);
}

ListGroup::~ListGroup()
{
    delete ui;
}
