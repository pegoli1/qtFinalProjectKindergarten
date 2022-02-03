#ifndef FORMBOARD_H
#define FORMBOARD_H

#include <QDialog>

namespace Ui {
class FormBoard;
}

class FormBoard : public QDialog
{
    Q_OBJECT

public:
    explicit FormBoard(QWidget *parent = nullptr);
    ~FormBoard();

private slots:
    void on_FormBoard_accepted();

    void on_btnADD_clicked();

    void on_btnNEW_clicked();

private:
    Ui::FormBoard *ui;
};

#endif // FORMBOARD_H
