#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

signals:
    void firstWindow(); // Сигнал для первого окна на открытие


private slots:
    // Слот-обработчик нажатия кнопки
    void on_buttonBack_clicked();
    void on_tabWidget_tabCloseRequested(int index);
    void on_buttonStudents_clicked();

    void on_buttonTeachers_clicked();

    void on_buttonManagers_clicked();

    void on_buttonFaculty_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
