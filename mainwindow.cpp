#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    M_Player = new QMediaPlayer();
    audioOutput = new QAudioOutput(this);

    ui->pushButton_play->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_replay->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->pushButton_back_seek->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->pushButton_next_seek->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->pushButton_stop->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    audioOutput->setVolume(0.5);

    M_Player->setAudioOutput(audioOutput);

    connect(M_Player, &QMediaPlayer::durationChanged, this, &MainWindow::durationChanged);
    connect(M_Player, &QMediaPlayer::positionChanged, this, &MainWindow::positionChanged);

    ui->horizontalSlider_AudioFile->setRange(0, M_Player->duration() / 1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateduration(qint64 duration)
{
    if(duration || Mduration)
    {
        QTime CurrentTime((duration / 3600) % 60, (duration / 60) % 60, duration % 60, (duration * 1000) % 1000);
        QTime totalTime((Mduration / 3600) % 60, (Mduration / 60) % 60, Mduration % 60, (Mduration * 1000) / 1000);
        QString format = "mm:ss";
        if(Mduration > 3600)
        {
            format = "hh:mm:ss";
        }
        ui->lbl_time_start->setText(CurrentTime.toString(format));
        ui->lbl_time_end->setText(totalTime.toString(format));
    }
}

void MainWindow::durationChanged(qint64 duration)
{
    Mduration = duration / 1000;
    ui->horizontalSlider_AudioFile->setMaximum(Mduration);

}

void MainWindow::positionChanged(qint64 progress)
{
    if(!ui->horizontalSlider_AudioFile->isSliderDown())
    {
        ui->horizontalSlider_AudioFile->setValue(progress / 1000);
    }
    updateduration(progress / 1000);
}

void MainWindow::on_pushButton_play_clicked()
{
    M_Player->play();
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    float percent = value / 100.0f;
    audioOutput->setVolume(percent);
}


void MainWindow::on_actionOpen_File_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this,tr("Select Audio File"),"",tr("MP3 File (*.MP3)"));
    M_Player->setSource(QUrl(FileName));

    QFileInfo File(FileName);

    ui->lbl_music->setText(File.fileName());
}

void MainWindow::on_pushButton_replay_clicked()
{
    M_Player->stop();
}


void MainWindow::on_pushButton_next_seek_clicked()
{
    ui->horizontalSlider_AudioFile->setValue(ui->horizontalSlider_AudioFile->value() + 20);
    M_Player->setPosition(ui->horizontalSlider_AudioFile->value() * 1000);
}


void MainWindow::on_pushButton_back_seek_clicked()
{
    ui->horizontalSlider_AudioFile->setValue(ui->horizontalSlider_AudioFile->value() - 20);
    M_Player->setPosition(ui->horizontalSlider_AudioFile->value() * 1000);
}


void MainWindow::on_pushButton_stop_clicked()
{
    M_Player->pause();
}

