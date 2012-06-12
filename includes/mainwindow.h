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

    QString file;
};

#endif // MAINWINDOW_H
