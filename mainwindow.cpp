#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QProcess>
#include <QStringList>
#include <QFileDialog>

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

QString URL = "";
QString downloadDir = "";
int format = 0;


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_urlLineEdit_textChanged(const QString &arg1)
{
    URL = arg1;
}


void MainWindow::on_downloadButton_clicked()
{
    if(!URL.isEmpty())
    {
        QProcess *process = new QProcess();
        QStringList arguments;

        downloadDir = QFileDialog::getExistingDirectory(this,"Chose download directory","/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

        if(!downloadDir.isEmpty()){
            switch (format) {
            case 0:
                arguments << "-f" << "mp4";
                break;
            case 1:
                arguments << "-x" << "--audio-format" << "mp3";
                break;

            case 2:
                arguments << "-x" << "--audio-format" << "wav";
                break;

            default:
                QMessageBox::information(this,"Error","wtf,invalid format???");
                break;
            }

            arguments << "--output" << downloadDir + "/%(title)s.%(ext)s" << URL;

            process->start("yt-dlp",arguments);

            if(!process->waitForStarted())
            {
                QMessageBox::information(this,"Error","Error downloading media,did you had yt-dlp? ");
            }
            if(process->waitForFinished())
            {
                QMessageBox::information(this,"Info","Media downloaded!");
            }

            process->deleteLater();
        }
        else
        {
            QMessageBox::information(this,"Error","Media path is empty");
            //Potencial leak of memory pointed to by 'process' [clang-analizer-cplusplus.NewDeleteLeaks]
            //fuck.........
            return;
        }
    }
    else
    {
        QMessageBox::information(this,"Error","URL is empty");
        return;
    }
}


void MainWindow::on_comboBox_activated(int index)
{
    format = index;
}

