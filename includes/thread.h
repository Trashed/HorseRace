//
// Thread.h
//
// This class handles threads.
//

#ifndef THREAD_H
#define THREAD_H

#include <QThread>

class Thread : public QThread
{
    Q_OBJECT

public:
    Thread(QObject *parent = 0);
    ~Thread();

protected:
    void run();

private:
};

#endif // THREAD_H
