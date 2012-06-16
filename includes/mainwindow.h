//
// mainwindow.h
//
// Declaration of the application's main view.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "includes/race.h"

#include <QMainWindow>
#include <QString>
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void openDirectoryButtonClicked();
    void openFileButtonClicked();
    
private:
    Ui::MainWindow *ui;

    QString filePath;

    QVector<Race> raceData;

};

#endif // MAINWINDOW_H
