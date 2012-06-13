#include "includes/fileactionthread.h"

/*
 * Constructor of Thread
 */
FileActionThread::FileActionThread(QObject *parent, QString filePath)
    :QThread(parent), _fileAction(filePath)
{

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
    // Actions to do in FileActionThread
    if (!_fileAction.isNull())
    {
        _fileAction.openToRead();
    }
}
