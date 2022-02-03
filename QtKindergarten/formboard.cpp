#include "formboard.h"
#include "ui_formboard.h"
#include <QApplication>
#include <QLabel>

FormBoard::FormBoard(QWidget *parent) : QDialog(parent), ui(new Ui::FormBoard)
{
    ui->setupUi(this);
}

FormBoard::~FormBoard()
{
    delete ui;
}


void FormBoard::on_btnADD_clicked()
{
    ui->textID->setText("1");
    ui->textColor->setText("2");
    ui->textWidth->setText("3");
    ui->textHeight->setText("4");
}


void FormBoard::on_btnNEW_clicked()
{
     ui->textID->setText("");
     ui->textColor->setText("");
     ui->textWidth->setText("");
     ui->textHeight->setText("");
}

