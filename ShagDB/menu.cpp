#include "menu.h"
#include "ui_menu.h"
#include "Students.h"
#include "Teachers.h"
#include "Managers.h"
#include "Faculty.h"


Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_buttonBack_clicked()
{
    this->close(); // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void Menu::on_tabWidget_tabCloseRequested(int index)
{
    if (index !=0){
    ui->tabWidget->removeTab(index);
    }
}

void Menu::on_buttonStudents_clicked()
{
    ui->tabWidget->addTab(new Students, "Студенты");
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() -1);
}

void Menu::on_buttonTeachers_clicked()
{
    ui->tabWidget->addTab(new Teachers, "Преподаватели");
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() -1);
}

void Menu::on_buttonManagers_clicked()
{
    ui->tabWidget->addTab(new Managers, "Менеджеры");
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() -1);
}

void Menu::on_buttonFaculty_clicked()
{
    ui->tabWidget->addTab(new Faculty, "Факультеты");
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() -1);
}
