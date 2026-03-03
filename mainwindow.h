#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QFileDialog>
#include <QStyle>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void durationChanged(qint64 duration);

    void positionChanged(qint64 progress);

    void on_pushButton_play_clicked();

    void on_pushButton_stop_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_actionOpen_File_triggered();

    void on_pushButton_replay_clicked();

    void on_pushButton_next_seek_clicked();

    void on_pushButton_back_seek_clicked();

private:
    void updateduration(qint64 duration);
    Ui::MainWindow *ui;
    QMediaPlayer *M_Player;
    QAudioOutput *audioOutput;
    qint64 Mduration;
};
#endif // MAINWINDOW_H
