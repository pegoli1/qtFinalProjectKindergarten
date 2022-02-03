#ifndef FORMCHILD_H
#define FORMCHILD_H

#include <QDialog>

namespace Ui {
class FormChild;
}

class FormChild : public QDialog
{
    Q_OBJECT

public:
    explicit FormChild(QWidget *parent = nullptr);
    ~FormChild();

private slots:
    void on_btnADD_clicked();

    void on_btnClear_clicked();

private:
    Ui::FormChild *ui;
};

#endif // FORMCHILD_H
