#ifndef FORMDESK_H
#define FORMDESK_H

#include <QDialog>

namespace Ui {
class FormDesk;
}

class FormDesk : public QDialog
{
    Q_OBJECT

public:
    explicit FormDesk(QWidget *parent = nullptr);
    ~FormDesk();

private slots:
    void on_btnADD_clicked();

    void on_btnClear_clicked();

private:
    Ui::FormDesk *ui;
};

#endif // FORMDESK_H
