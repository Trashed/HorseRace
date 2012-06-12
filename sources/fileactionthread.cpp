#include "includes/fileactionthread.h"

/*
 * Constructor of Thread
 */
FileActionThread::FileActionThread(QObject *parent)
    :QThread(parent)
{

}

/*
 * Destructor of class Thread
 */
FileActionThread::~FileActionThread()
{
    // Do something here???

    fileAction = 0;
    delete fileAction;

    wait();
}

// Initialize FileActionThread with file name to be accessed
void FileActionThread::setFilePath(QString filePath_)
{
    fileAction = new FileAction(filePath_);
}

/*
 * Run method. This is called automatically.
 */
void FileActionThread::run()
{
    // Actions to do in FileActionThread
}
