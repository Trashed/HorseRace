#include "includes/thread.h"

/*
 * Constructor of Thread
 */
Thread::Thread(QObject *parent)
    :QThread(parent)
{

}

/*
 * Destructor of class Thread
 */
Thread::~Thread()
{
    // Do something here???

    wait();
}

/*
 * Run method. This is called automatically.
 */
void Thread::run()
{
    // ...
}
