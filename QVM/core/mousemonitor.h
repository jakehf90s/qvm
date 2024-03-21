#ifndef MOUSEMONITOR_H
#define MOUSEMONITOR_H

#include <QObject>

class MouseMonitor : public QObject
{
    Q_OBJECT
public:
    explicit MouseMonitor(QObject *parent = nullptr);
signals:
    void onMouseMove(qreal x, qreal y, qint8 screenIndex);
};

#endif // MOUSEMONITOR_H
