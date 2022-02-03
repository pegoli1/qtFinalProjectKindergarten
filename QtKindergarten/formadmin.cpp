#include "formadmin.h"
#include "ui_formadmin.h"
#include <QMessageBox>
#include "Admin.h"
#include <QFile>
#include <QTextStream>
#include <QString>

FormAdmin::FormAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormAdmin)
{
    ui->setupUi(this);
    ui->textFName->setFocus();
    //-------------------------------------------------------------------- Read Admin Info From File
    QFile file1("F:\\Files\\admin.txt");
    if (!file1.open(QIODevice::ReadOnly | QIODevice::Text))  return;
    if (!file1.atEnd()) {
        QString line = file1.readLine();
        QStringList fields = line.split(" ");
        QStringList::Iterator S = fields.begin(); ui->textFName->setText(*S);
        ++S; ui->textLName->setText(*S);
        ++S; ui->textAdd->setText(*S);
        ++S; ui->textPhone->setText(*S);
        ++S; ui->textEmail->setText(*S);
        ++S; ui->textSalary->setText(*S);
    }
    file1.close();
}

FormAdmin::~FormAdmin()
{
    delete ui;
}

void FormAdmin::on_btnExit_clicked()
{
    this->close();
}

void FormAdmin::on_btnUpdate_clicked()
{
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
        msgBox.setText("please enter Address...");
        msgBox.exec();
        ui->textAdd->setFocus();
        return;
    }
    if(ui->textPhone->toPlainText()==""){
        msgBox.setText("please enter Phone...");
        msgBox.exec();
        ui->textPhone->setFocus();
        return;
    }
    if(ui->textEmail->toPlainText()==""){
        msgBox.setText("please enter Email ...");
        msgBox.exec();
        ui->textEmail->setFocus();
        return;
    }
    if(ui->textSalary->toPlainText()==""){
        msgBox.setText("please enter Salary ...");
        msgBox.exec();
        ui->textSalary->setFocus();
        return;
    }

    QString firstName, lastName, address, phone, email;  int salary;

    firstName=ui->textFName->toPlainText();
    lastName=ui->textLName->toPlainText();
    address=ui->textAdd->toPlainText();
    phone=ui->textPhone->toPlainText();
    email=ui->textEmail->toPlainText();
    salary=ui->textSalary->toPlainText().toInt();

    Admin admin(firstName.toStdString(), lastName.toStdString(),email.toStdString(), salary);

    //---------------------------------------------------------- Write to File
    QString filename = "F:\\Files\\admin.txt";
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly)) {
        QTextStream out(&file);
        out << firstName << " " << lastName << " " << address << " " << phone << " " << email << " " << salary;
        file.close();
    }
    msgBox.setText("Done ...");
    msgBox.exec();


}

