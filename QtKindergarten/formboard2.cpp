#include "formboard2.h"
#include "ui_formboard2.h"
#include <QMessageBox>
#include "Board.h"
#include <QFile>
#include <QTextStream>

int num_line=0;

FormBoard2::FormBoard2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormBoard2)
{
    ui->setupUi(this);
    ui->textID->setFocus();
    //-------------------------------------------------------------------- Read from file
    QFile file1("F:\\Files\\board.txt");
    if (!file1.open(QIODevice::ReadOnly | QIODevice::Text))  return;
    QString str2="";
    num_line=0;
    while (!file1.atEnd()) {
        num_line++;
        QByteArray line = file1.readLine();
        str2=ui->textBoards->toPlainText()+line;
        ui->textBoards->setText(str2);
    }
    file1.close();
}

FormBoard2::~FormBoard2()
{
    delete ui;
}

void FormBoard2::on_btnADD_clicked()
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
    str1=ui->textBoards->toPlainText();
    if(str1!="") str1=str1+"\n";
    str1=str1+ui->textID->toPlainText();
    str1=str1+"  "+ui->textColor->toPlainText();
    str1=str1+"  "+ui->textWidth->toPlainText();
    str1=str1+"  "+ui->textHeight->toPlainText();
    str1=str1+"  "+ui->textPrice->toPlainText();

    ui->textBoards->setText(str1);

    QString id,color;
    float width, height, price;

    id=ui->textID->toPlainText();
    color=ui->textColor->toPlainText();
    width=ui->textWidth->toPlainText().toFloat();
    height=ui->textHeight->toPlainText().toFloat();
    price=ui->textPrice->toPlainText().toFloat();

    Board board(id.toStdString(), color.toStdString(), width, height, price);

    //----------------------------------------- Append to File

    //QString QCoreApplication::applicationFilePath()
    //ui->textPrice->setText(QDir::currentPath());
    //ui->textPrice->setText(QCoreApplication::applicationDirPath());

    QString filename = "F:\\Files\\board.txt";
    QFile file(filename);
    if (file.open(QIODevice::Append)) {
        QTextStream out(&file);
        if(num_line==0) out << id << "  " << color << "  " << width << "  " << height << "  " << price;
        else out << "\n" << id << "  " << color << "  " << width << "  " << height << "  " << price;
        num_line++;
        file.close();
    }
}

void FormBoard2::on_btnClear_clicked()
{
    ui->textID->setText("");
    ui->textColor->setText("");
    ui->textWidth->setText("");
    ui->textHeight->setText("");
    ui->textPrice->setText("");
}

