//
// MainWindow.h
//
// Declaration of the application's main view.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

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
};

#endif // MAINWINDOW_H
