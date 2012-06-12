//
// FileAction.h
//
// This class handles file I/O actions.
//

#ifndef FILEACTION_H
#define FILEACTION_H

#include <QFile>
#include <QString>
#include <QTextEdit>

#include "includes/mainwindow.h"

class FileAction
{
public:
    FileAction();  // Default constructor
    FileAction(QString);
    ~FileAction();  // Destructor

    void openToRead();
protected:

private:
    QString filename;
};

#endif // FILEACTION_H
