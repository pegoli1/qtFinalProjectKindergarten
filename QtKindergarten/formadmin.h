#ifndef FORMADMIN_H
#define FORMADMIN_H

#include <QDialog>

namespace Ui {
class FormAdmin;
}

class FormAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit FormAdmin(QWidget *parent = nullptr);
    ~FormAdmin();

private slots:
    void on_btnExit_clicked();

    void on_btnUpdate_clicked();

private:
    Ui::FormAdmin *ui;
};

#endif // FORMADMIN_H
