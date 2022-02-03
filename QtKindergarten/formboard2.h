#ifndef FORMBOARD2_H
#define FORMBOARD2_H

#include <QDialog>

namespace Ui {
class FormBoard2;
}

class FormBoard2 : public QDialog
{
    Q_OBJECT

public:
    explicit FormBoard2(QWidget *parent = nullptr);
    ~FormBoard2();

private slots:
    void on_btnADD_clicked();
    void on_btnClear_clicked();

private:
    Ui::FormBoard2 *ui;
};

#endif // FORMBOARD2_H
