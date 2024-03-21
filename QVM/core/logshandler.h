#ifndef LOGSHANDLER_H
#define LOGSHANDLER_H

#include <QObject>

class LogsHandler : public QObject
{
    Q_OBJECT
public:
    explicit LogsHandler(QObject *parent = nullptr);

signals:
};

#endif // LOGSHANDLER_H
