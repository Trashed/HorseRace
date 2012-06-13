#include "includes/fileaction.h"

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
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Didn't open the file " + filename;
        return;
    }
    else
    {
        // TODO: Paremmin hallitut toiminnot tänne
        while (!file.atEnd())
        {
            // TODO: tänne Parser ja toiminnot tietojen syöttämiseen
            // Horse ja Race olioihin
        }
        qDebug() << "File " + filename + " opened succesfully";
    }
}

/*
 * Checks whether the FileAction object is null or not
 */
bool FileAction::isNull()
{
    if (this != NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}
