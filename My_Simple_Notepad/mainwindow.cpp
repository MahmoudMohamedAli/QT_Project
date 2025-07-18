#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "open file");
    QFile file(filename);
    file_path = filename;
    if(!file.open(QFile::ReadOnly |QFile::Text))
    {
        QMessageBox::warning(this,"..","failed to open file");
        return;
    }
    QTextStream in (&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void MainWindow::on_actionSave_triggered()
{

    QFile file(file_path);
    if(!file.open(QFile::WriteOnly |QFile::Text))
    {
        QMessageBox::warning(this,"..","failed to Save file");
        return;
    }
    QTextStream out (&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_actionabout_triggered()
{
    QString aboutstr = "Author : Mahmoud Elkot\n";
    aboutstr += "Date: 28.06.2025\n";
    aboutstr += "Simple Notepad\n";
    aboutstr += "Email: mahmoudalihack.0000@gmail.com\n";
    aboutstr += "(C) Notepad R\n";
    QMessageBox::information(this,"About",aboutstr);
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionSave_as_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save File");
    QFile file(filename);
    file_path = filename;
    if(!file.open(QFile::WriteOnly |QFile::Text))
    {
       // QMessageBox::warning(this,"..","");
        return;
    }
    QTextStream out (&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

}


void MainWindow::on_actionNew_triggered()
{
   //ui->textEdit->new
    file_path = "";
   ui->textEdit->setText("");
}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionhelp_triggered()
{
    QString MsgHelp = "Connect to Author Through E-mail: mahmoudalihack.0000@gamil.com";
    QMessageBox::information(this,"Help", MsgHelp);
}

