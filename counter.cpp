#include "counter.h"

counter::counter()
{

}

void counter::run()
{
    qInfo()<<"Starting"<<QThread::currentThread();

    for(int i=0;i<10;i++){

        qInfo()<<QThread::currentThread()<<" = "<<i;
        auto value = static_cast<unsigned long>(QRandomGenerator::global()->bounded(100));
        QThread::currentThread()->msleep(value);
    }

    qInfo()<<"Finished"<<QThread::currentThread();
}
