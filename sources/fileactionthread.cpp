#include "includes/fileactionthread.h"
#include "includes/horse.h"

/**
 * Constructor of Thread
 */
FileActionThread::FileActionThread(QObject *parent, QString _filename)
    :QThread(parent)
{
     filename = _filename;
}

/**
 * Destructor of class Thread
 */
FileActionThread::~FileActionThread()
{
    // Do something here???

    wait();
}

/**
 * Run method. This is called automatically.
 */
void FileActionThread::run()
{
    QFile file(filename);
    QTextStream stream(&file);
    Horse horseBuffer;
    Race raceBuffer;
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Didn't open the file " + filename;
        return;
    }
    else
    {
        qDebug() << "File " + filename + " opened succesfully";

        QString strBuffer;
        //Race raceBuffer;

        while (!file.atEnd())
        {
            strBuffer = stream.readLine();


            if (strBuffer == "")
            {
                qDebug() << "empty line";
            }
            else
            {
                qDebug() << "Parser method called";
                // TODO: TOISTAISEKSI arvopalautetaan strBufferiin
                strBuffer = parser.parseDataFromStringBuffer(strBuffer);
            }

            strBuffer = "";
        }

        file.close();
    }
}

/**
 * setRaceData
 *
 * Gets raceData (QVector) as a reference parameter. Thus, the data is automatically "copied"
 * to the MainWindow raceData instance.
 */
void FileActionThread::setRaceData(QVector<Race> &_raceData)
{
    raceData = _raceData;

    if (raceData.isEmpty())
    {
        qDebug() << "vector raceData is empty";
    }
}
