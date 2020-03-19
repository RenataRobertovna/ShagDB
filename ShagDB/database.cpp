#include "database.h"
#include "ui_database.h"

DataBase::DataBase(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DataBase)
{
    ui->setupUi(this);
    // Инициализируем второе окно
    sWindow = new Menu();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(sWindow, &Menu::firstWindow, this, &DataBase::show);
}

DataBase::~DataBase()
{
    delete ui;
}

void DataBase::on_pushButton_clicked()
{
    sWindow->show(); // Показываем второе окно
    this->close(); // Закрываем основное окно
}
