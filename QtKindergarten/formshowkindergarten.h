#ifndef FORMSHOWKINDERGARTEN_H
#define FORMSHOWKINDERGARTEN_H

#include <QDialog>

namespace Ui {
class FormShowKindergarten;
}

class FormShowKindergarten : public QDialog
{
    Q_OBJECT

public:
    explicit FormShowKindergarten(QWidget *parent = nullptr);
    ~FormShowKindergarten();

private:
    Ui::FormShowKindergarten *ui;
};

#endif // FORMSHOWKINDERGARTEN_H
