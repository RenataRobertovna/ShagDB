#ifndef LISTGROUP_H
#define LISTGROUP_H

#include <QWidget>

namespace Ui {
class ListGroup;
}

class ListGroup : public QWidget
{
    Q_OBJECT

public:
    explicit ListGroup(QWidget *parent = nullptr);
    ~ListGroup();

private:
    Ui::ListGroup *ui;
};

#endif // LISTGROUP_H
