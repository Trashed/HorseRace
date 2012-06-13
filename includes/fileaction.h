//
// FileAction.h
//
// This class handles file I/O actions.
//

#ifndef FILEACTION_H
#define FILEACTION_H

#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QString>
#include <QTextEdit>
#include <QDebug>

#include "includes/mainwindow.h"

class FileAction
{
public:
    FileAction();  // Default constructor
    FileAction(QString);
    ~FileAction();  // Destructor

    void openToRead();

    bool isNull();
protected:

private:
    QString filename;
};

#endif // FILEACTION_H
