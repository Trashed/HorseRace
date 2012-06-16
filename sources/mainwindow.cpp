#include "includes/mainwindow.h"
#include "includes/ui_mainwindow.h"
#include "includes/fileactionthread.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QString>

/*
 * Constructor
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);  // initialize ui



    ui->filenameField->setText("Ei tiedostoa valittuna");  // set the default text to TextField

    // Program's connections
    connect(ui->openDirectoryButton, SIGNAL(clicked()), this, SLOT(openDirectoryButtonClicked()));
    connect(ui->openFileButton, SIGNAL(clicked()), this, SLOT(openFileButtonClicked()));
}

/*
 * Destructor
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Actions performed when user clicks openDirectoryButton
 */
void MainWindow::openDirectoryButtonClicked()
{
    // Opens a dialog for selecting the file
    filePath = QFileDialog::getOpenFileName(this, tr("Valitse lähtölistatiedosto"), "", tr("Text Documents (*.txt)"));
    ui->filenameField->setText(filePath);
}

/*
 * Parse data from selected text file
 */
void MainWindow::openFileButtonClicked()
{
    if (filePath != "")
    {

        // Create a thread for file I/O, set the filePath to
        // be accessed and start the thread
        // TODO: Add Horse and Race objects as a reference parameter to the Thread
        FileActionThread fileThread(this, filePath);
        fileThread.setRaceData(raceData);
        fileThread.start();
    }
    else
    {
        QMessageBox msg;
        msg.setInformativeText("Ei tiedostoa valittuna!");
        msg.exec();
    }
}
