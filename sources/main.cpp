#include <QtGui/QApplication>
#include "includes/mainwindow.h"

int main(int argc, char *argv[])
{
    // Creates the application
    QApplication a(argc, argv);

    // Creates the main window and shows it
    MainWindow w;
    w.show();
    
    // This is the main loop. Will be executed until program calls the 'exit()' function
    return a.exec();
}
