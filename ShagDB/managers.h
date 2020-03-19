#ifndef MANAGERS_H
#define MANAGERS_H

#include <QWidget>

namespace Ui {
class Managers;
}

class Managers : public QWidget
{
    Q_OBJECT

public:
    explicit Managers(QWidget *parent = nullptr);
    ~Managers();

private:
    Ui::Managers *ui;
};

#endif // MANAGERS_H
