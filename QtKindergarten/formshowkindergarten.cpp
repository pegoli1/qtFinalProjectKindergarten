#include "formshowkindergarten.h"
#include "ui_formshowkindergarten.h"
#include <QMessageBox>
//#include "Admin.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <string>
//#include <Kindergarten.h>

using namespace std;

FormShowKindergarten::FormShowKindergarten(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormShowKindergarten)
{
    ui->setupUi(this);
    ui->textRoom->setFocus();

  //  Kindergarten kindergarten;
    //----------------------------------------------------- Read Kindergarten
    QFile file2("F:\\Files\\Kindergarten.txt");
    if (!file2.open(QIODevice::ReadOnly | QIODevice::Text))  return;
    if (!file2.atEnd()) {
        QString line = file2.readLine();
        ui->textRoom->setText(line);
        line = file2.readLine();
        ui->textAdd->setText(line);
    }
    file2.close();

    //---------------------------------------------------------------- Read Admin
    QString name;
    string firstName, lastName, add, phone, email; int salary;
    QFile file1("F:\\Files\\admin.txt");
    if (!file1.open(QIODevice::ReadOnly | QIODevice::Text))  return;
    if (!file1.atEnd()) {
        QString line = file1.readLine();
        QStringList fields = line.split(" ");
        QStringList::Iterator S = fields.begin();
        firstName=(*S).toStdString();name=(*S);  ++S;
        lastName=(*S).toStdString();name+=" " + (*S); ++S;
        add=(*S).toStdString();++S;
        phone=(*S).toStdString();++S;
        email=(*S).toStdString();++S;
        salary=(*S).toInt();
    }
    file1.close();
    ui->label_Admin_Name->setText(name);

  /*  Admin admin1(firstName,lastName,email,salary);
    admin1.setAddress(add);
    admin1.setPhone(phone);
    kindergarten.setAdmin(admin1);*/


    int num=0;
    //----------------------------------------------------- Read Boards
    QFile file3("F:\\Files\\board.txt");
    if (!file3.open(QIODevice::ReadOnly | QIODevice::Text))  return;
    while (!file3.atEnd()) {
        QString str2="";
        QString line = file3.readLine();
        QStringList fields = line.split("  ");
        QStringList::Iterator S = fields.begin();
        str2=(*S);++S;
        str2 += "   " + (*S); ++S;
        str2 += "   " + (*S) + " x "; ++S;
        str2 += (*S);
        ui->listWidget_board->addItem(str2);
        num++;
    }
    file3.close();
    ui->label_num_board->setText("Boards ("+QString::number(num)+")");

    //----------------------------------------------------- Read Desks
    num=0;
    QFile file4("F:\\Files\\desk.txt");
    if (!file4.open(QIODevice::ReadOnly | QIODevice::Text))  return;
    while (!file4.atEnd()) {
        QString str2="";
        QString line = file4.readLine();
        QStringList fields = line.split("  ");
        QStringList::Iterator S = fields.begin();
        str2=(*S);++S;
        str2 += "   " + (*S); ++S;
        str2 += "   " + (*S) + " x "; ++S;
        str2 += (*S);
        ui->listWidget_desk->addItem(str2);
        num++;
    }
    file4.close();
    ui->label_num_desk->setText("Desks ("+QString::number(num)+")");

    //----------------------------------------------------- Read Child
    num=0;
    QFile file5("F:\\Files\\childs.txt");
    QString strphone;
    if (!file5.open(QIODevice::ReadOnly | QIODevice::Text))  return;
    while (!file5.atEnd()) {
        QString str2="";
        QString line = file5.readLine();
        QStringList fields = line.split("  ");
        QStringList::Iterator S = fields.begin();
        str2=(*S);++S;
        str2 += " " + (*S); ++S; ++S;
        strphone=(*S);++S;
        str2 += " (" + (*S) + ") ";
        str2 += strphone;
        ui->listWidget_child->addItem(str2);
        num++;
    }
    file5.close();
    ui->label_num_childs->setText("Child ("+QString::number(num)+")");
}

FormShowKindergarten::~FormShowKindergarten()
{
    delete ui;
}
