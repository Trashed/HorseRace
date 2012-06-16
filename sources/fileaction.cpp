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
    QTextStream stream(&file);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Didn't open the file " + filename;
        return;
    }
    else
    {
        qDebug() << "File " + filename + " opened succesfully";

        QString buffer;
        // TODO: Paremmin hallitut toiminnot tänne
        while (!file.atEnd())
        {
            static int index = 1;
            buffer = stream.readLine();

            // TODO: tähän uusi while-silmukka

            buffer = "";
        }

        file.close();
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
