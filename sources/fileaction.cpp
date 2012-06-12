#include "includes/fileaction.h"
#include <QMessageBox>
#include <QTextStream>

/*
 * Default constructor
 */
FileAction::FileAction()
{
    // ...
}

/*
 * Constructor
 * param: filename
 */
FileAction::FileAction(QString filename_)
{
    filename = filename_;
}

/*
 * Destructor
 */
FileAction::~FileAction()
{
    // ...
}

/*
 * Method to open the file for reading.
 */
void FileAction::openToRead()
{
    QFile mFile(filename);

    if (mFile.open(QIODevice::ReadOnly))
    {
        QFile *tempFile = new QFile("tempfile.txt");
        tempFile->open(QIODevice::WriteOnly);

        if (tempFile->isOpen())
        {
            QTextStream in(&mFile);
            QString temp;
            while (!mFile.atEnd())
            {
                temp = in.readLine();
                if (!temp.contains("= Page 1 =", Qt::CaseInsensitive))
                {
                    tempFile->write(temp.toAscii() + '\n');
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            QMessageBox msg;
            msg.setInformativeText("Tiedostoa " + tempFile->fileName() + "ei voitu avata");
            msg.exec();
        }

        mFile.close();
        tempFile->close();
        delete tempFile;
    }
    else  // Notification appears if file fails to open
    {
        QMessageBox msg;
        msg.setInformativeText("Tiedostoa ei voitu avata");
        msg.exec();
    }
}
