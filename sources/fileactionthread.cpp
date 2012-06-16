#include "includes/fileactionthread.h"

/*
 * Constructor of Thread
 */
FileActionThread::FileActionThread(QObject *parent, QString _filename)
    :QThread(parent)
{
     filename = _filename;
}

/*
 * Destructor of class Thread
 */
FileActionThread::~FileActionThread()
{
    // Do something here???

    wait();
}

/*
 * Run method. This is called automatically.
 */
void FileActionThread::run()
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

        QString strBuffer;
        // TODO: Paremmin hallitut toiminnot t�nne
        while (!file.atEnd())
        {
            static int index = 1;
            strBuffer = stream.readLine();

            // TODO: t�h�n tarvittavat ehdot ja silmukat

            strBuffer = "";
        }

        file.close();
    }
}

void FileActionThread::setRaceData(QVector<Race> &_raceData)
{
    raceData = _raceData;

    if (raceData.isEmpty())
    {
        qDebug() << "vector raceData is empty";
    }
}
