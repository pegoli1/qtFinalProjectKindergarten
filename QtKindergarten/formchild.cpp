#include "formchild.h"
#include "ui_formchild.h"
#include <QMessageBox>
//#include "Child.h"
#include <QFile>
#include <QTextStream>

int num_line_child=0;

FormChild::FormChild(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormChild)
{
    ui->setupUi(this);
    ui->comboBox->addItem("False");
    ui->comboBox->addItem("True");
    ui->comboBox->setCurrentIndex(0);
    ui->textFName->setFocus();
    num_line_child=0;

    //-------------------------------------------------------------------- Read from file
    QFile file1("F:\\Files\\childs.txt");
    if (!file1.open(QIODevice::ReadOnly | QIODevice::Text))  return;
    QString str2="";
    num_line_child=0;
    while (!file1.atEnd()) {
        num_line_child++;
        QByteArray line = file1.readLine();
        str2=ui->textBoards->toPlainText()+line;
        ui->textBoards->setText(str2);
    }
    file1.close();
}

FormChild::~FormChild()
{
    delete ui;
}

void FormChild::on_btnADD_clicked()
{
    //----------------
    QString str1;
    QMessageBox msgBox;

    if(ui->textFName->toPlainText()==""){
        msgBox.setText("please enter First Name...");
        msgBox.exec();
        ui->textFName->setFocus();
        return;
    }
    if(ui->textLName->toPlainText()==""){
        msgBox.setText("please enter Last Name...");
        msgBox.exec();
        ui->textLName->setFocus();
        return;
    }
    if(ui->textAdd->toPlainText()==""){
        msgBox.setText("please enter Address ...");
        msgBox.exec();
        ui->textAdd->setFocus();
        return;
    }
    if(ui->textPhone->toPlainText()==""){
        msgBox.setText("please enter Phone ...");
        msgBox.exec();
        ui->textPhone->setFocus();
        return;
    }
    if(ui->textAge->toPlainText()==""){
        msgBox.setText("please enter Age...");
        msgBox.exec();
        ui->textAge->setFocus();
        return;
    }
    if(ui->textTuition->toPlainText()==""){
        msgBox.setText("please enter Tuition...");
        msgBox.exec();
        ui->textTuition->setFocus();
        return;
    }

    str1=ui->textBoards->toPlainText();
    if(str1!="") str1=str1+"\n";
    str1=str1+ui->textFName->toPlainText();
    str1=str1+"  "+ui->textLName->toPlainText();
    str1=str1+"  "+ui->textAdd->toPlainText();
    str1=str1+"  "+ui->textPhone->toPlainText();
    str1=str1+"  "+ui->textTuition->toPlainText();
    str1=str1+"  "+ui->comboBox->currentData(0).toString();

    ui->textBoards->setText(str1);


    QString firstName, lastName; int age, tuition;
    firstName=ui->textFName->toPlainText();
    lastName=ui->textLName->toPlainText();
    age=ui->textAge->toPlainText().toInt();
    tuition=ui->textTuition->toPlainText().toInt();

    //Child child(firstName.toStdString(), lastName.toStdString(),age, tuition);

    QString phone,add,str_is_paid;
    phone=ui->textPhone->toPlainText();
    add=ui->textAdd->toPlainText();
    str_is_paid=ui->comboBox->currentData(0).toString();
    //bool is_paid=ui->comboBox->currentData(0).toBool();

    //----------------------------------------------------- Append to File
    QString filename = "F:\\Files\\childs.txt";
    QFile file(filename);
    if (file.open(QIODevice::Append)) {
        QTextStream out(&file);
        if(num_line_child==0) out <<firstName<<"  "<<lastName<<"  "<<add<<"  "<< phone<<"  "<<age<<"  "<<tuition<<"  "<<str_is_paid;
        else out <<"\n"<<firstName<<"  "<<lastName<<"  "<<add<<"  "<< phone<<"  "<<age<<"  "<<tuition<<"  "<<str_is_paid;
        num_line_child++;
        file.close();
    }

}


void FormChild::on_btnClear_clicked()
{
    ui->textFName->setText("");
    ui->textLName->setText("");
    ui->textAdd->setText("");
    ui->textPhone->setText("");
    ui->textTuition->setText("");
    ui->textLName->setText("");
    ui->textFName->setFocus();

}

