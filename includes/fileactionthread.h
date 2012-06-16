//
// fileactionthread.h
//
// This class handles file I/O thread.
//

#ifndef FILEACTIONTHREAD_H
#define FILEACTIONTHREAD_H

#include "includes/mainwindow.h"
#include "includes/race.h"

#include <QThread>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include <QVector>

class FileActionThread : public QThread
{
    Q_OBJECT

public:
    FileActionThread(QObject *parent = 0, QString _filename = NULL);
    ~FileActionThread();

    void setRaceData(QVector<Race> &);
protected:
    void run();

private:
    QString filename;
    // TODO: Tänne myös muuttujat Horse ja Race -luokista, saa viiteparametring MainWindow-luokasta
    QVector<Race> raceData;
};

#endif // FILEACTIONTHREAD_H
