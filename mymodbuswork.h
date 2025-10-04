#ifndef MYMODBUSWORK_H
#define MYMODBUSWORK_H

#include <QObject>

class MyModBusWork : public QObject
{
    Q_OBJECT
public:
    explicit MyModBusWork(QObject *parent = nullptr);

signals:
};

#endif // MYMODBUSWORK_H
