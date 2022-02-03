#include "ui_formdesk.h"
#include "formdesk.h"
#include "Desk.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

int number_of_line=0;

FormDesk::FormDesk(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormDesk)
{
    ui->setupUi(this);
    ui->textID->setFocus();
    //-------------------------------------------------------------------- Read from file
    QFile file1("F:\\Files\\desk.txt");
    if (!file1.open(QIODevice::ReadOnly | QIODevice::Text))  return;
    QString str2="";
    number_of_line=0;
    while (!file1.atEnd()) {
        number_of_line++;
        QByteArray line = file1.readLine();
        str2=ui->textDesks->toPlainText()+line;
        ui->textDesks->setText(str2);
    }
    file1.close();
}

FormDesk::~FormDesk()
{
    delete ui;
}

void FormDesk::on_btnADD_clicked()
{
    QString str1;
    QMessageBox msgBox;

    if(ui->textID->toPlainText()==""){
        msgBox.setText("please enter ID...");
        msgBox.exec();
        ui->textID->setFocus();
        return;
    }
    if(ui->textColor->toPlainText()==""){
        msgBox.setText("please enter Color...");
        msgBox.exec();
        ui->textColor->setFocus();
        return;
    }
    if(ui->textWidth->toPlainText()==""){
        msgBox.setText("please enter Width...");
        msgBox.exec();
        ui->textWidth->setFocus();
        return;
    }
    if(ui->textHeight->toPlainText()==""){
        msgBox.setText("please enter Height...");
        msgBox.exec();
        ui->textHeight->setFocus();
        return;
    }
    if(ui->textPrice->toPlainText()==""){
        msgBox.setText("please enter Price...");
        msgBox.exec();
        ui->textPrice->setFocus();
        return;
    }
    str1=ui->textDesks->toPlainText();
    if(str1!="") str1=str1+"\n";
    str1=str1+ui->textID->toPlainText();
    str1=str1+"  "+ui->textColor->toPlainText();
    str1=str1+"  "+ui->textWidth->toPlainText();
    str1=str1+"  "+ui->textHeight->toPlainText();
    str1=str1+"  "+ui->textPrice->toPlainText();

    ui->textDesks->setText(str1);

    QString id,color;
    float width, height, price;

    id=ui->textID->toPlainText();
    color=ui->textColor->toPlainText();
    width=ui->textWidth->toPlainText().toFloat();
    height=ui->textHeight->toPlainText().toFloat();
    price=ui->textPrice->toPlainText().toFloat();

    //Desk board(id.toStdString(), color.toStdString(), width, height, price);

    //----------------------------------------- Append to File
    QString filename = "F:\\Files\\desk.txt";
    QFile file(filename);
    if (file.open(QIODevice::Append)) {
        QTextStream out(&file);
        if(number_of_line==0) out << id << "  " << color << "  " << width << "  " << height << "  " << price;
        else out << endl << id << "  " << color << "  " << width << "  " << height << "  " << price;
        number_of_line++;
        file.close();
    }
}

void FormDesk::on_btnClear_clicked()
{
    ui->textID->setText("");
    ui->textColor->setText("");
    ui->textWidth->setText("");
    ui->textHeight->setText("");
    ui->textPrice->setText("");
}

