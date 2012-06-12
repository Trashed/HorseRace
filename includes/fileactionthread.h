//
// FileActionThread.h
//
// This class handles threads.
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
    FileActionThread(QObject *parent = 0);
    ~FileActionThread();

    void setFilePath(QString filePath_);

protected:
    void run();

private:
    FileAction *fileAction;
};

#endif // FILEACTIONTHREAD_H
