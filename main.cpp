#include <QCoreApplication>
#include "counter.h"
#include "QDebug"
#include "QThreadPool"
#include "QThread"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread::currentThread()->setObjectName("Main");

    QThreadPool *pool = QThreadPool::globalInstance();
    qInfo()<<pool->maxThreadCount()<< " Threds";


    for(int i=0;i<50;i++){
        counter *c = new counter();
        c->setAutoDelete(true);
        pool->start(c);
    }


    return a.exec();
}
