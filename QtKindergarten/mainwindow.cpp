#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formboard2.h"
#include "formdesk.h"
#include "formadmin.h"
#include "formchild.h"
#include "formshowkindergarten.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_menuBoard_triggered()
{
    FormBoard2 frmboard;
    frmboard.setModal(true);
    frmboard.exec();
}

void MainWindow::on_mnuDesk_triggered()
{
    FormDesk frmdesk;
    frmdesk.setModal(true);
    frmdesk.exec();
}


void MainWindow::on_menuAmin_triggered()
{
    FormAdmin frmadmin;
    frmadmin.setModal(true);
    frmadmin.exec();
}


void MainWindow::on_mnuChild_triggered()
{
    FormChild frmchild;
    frmchild.setModal(true);
    frmchild.exec();
}


void MainWindow::on_mnuShow_triggered()
{
    FormShowKindergarten frmshow;
    frmshow.setModal(true);
    frmshow.exec();
}

