//
// fileactionthread.h
//
// This class handles file I/O thread.
//

#ifndef FILEACTIONTHREAD_H
#define FILEACTIONTHREAD_H

#include "includes/fileaction.h"
#include <QThread>
#include <QString>

class FileActionThread : public QThread
{
    Q_OBJECT

public:
    FileActionThread(QObject *parent = 0, QString filePath = 0);
    ~FileActionThread();

protected:
    void run();

private:
    FileAction _fileAction;
};

#endif // FILEACTIONTHREAD_H
