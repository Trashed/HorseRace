#include "includes/mainwindow.h"
#include "includes/ui_mainwindow.h"
#include "includes/fileaction.h"
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
    ui->setupUi(this);

    ui->filenameField->setText("Ei tiedostoa valittuna");

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
    file = QFileDialog::getOpenFileName(this, tr("Valitse lähtölistatiedosto"), "", tr("Text Documents (*.txt)"));
    ui->filenameField->setText(file);
}

/*
 * Parse data from selected text file
 */
void MainWindow::openFileButtonClicked()
{
    if (file != "")
    {
        FileAction fileAction(file);
        fileAction.openToRead();
    }
    else
    {
        QMessageBox msg;
        msg.setInformativeText("Ei tiedostoa valittuna!");
        msg.exec();
    }
}
