#ifndef TEACHERS_H
#define TEACHERS_H

#include <QWidget>

namespace Ui {
class Teachers;
}

class Teachers : public QWidget
{
    Q_OBJECT

public:
    explicit Teachers(QWidget *parent = nullptr);
    ~Teachers();

private:
    Ui::Teachers *ui;
};

#endif // TEACHERS_H
