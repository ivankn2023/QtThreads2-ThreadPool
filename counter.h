#ifndef COUNTER_H
#define COUNTER_H

#include "QDebug"
#include "QRunnable"
#include "QThread"
#include "QRandomGenerator"
#include "QObject"
class counter: public QRunnable
{
public:
    counter();

    // QRunnable interface
public:
    void run();
};

#endif // COUNTER_H
