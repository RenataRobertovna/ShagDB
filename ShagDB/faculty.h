#ifndef FACULTY_H
#define FACULTY_H

#include <QWidget>

namespace Ui {
class Faculty;
}

class Faculty : public QWidget
{
    Q_OBJECT

public:
    explicit Faculty(QWidget *parent = nullptr);
    ~Faculty();

private:
    Ui::Faculty *ui;
};

#endif // FACULTY_H
