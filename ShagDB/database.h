#ifndef DATABASE_H
#define DATABASE_H

#include <QMainWindow>
#include <menu.h>

QT_BEGIN_NAMESPACE
namespace Ui { class DataBase; }
QT_END_NAMESPACE

class DataBase : public QMainWindow
{
    Q_OBJECT

public:
    DataBase(QWidget *parent = nullptr);
    ~DataBase();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

private:
    Ui::DataBase *ui;
    // второе окно
   Menu *sWindow;
};
#endif // DATABASE_H
