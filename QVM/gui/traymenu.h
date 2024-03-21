#ifndef TRAYMENU_H
#define TRAYMENU_H

#include <QObject>

class TrayMenu : public QObject
{
    Q_OBJECT
public:
    explicit TrayMenu(QObject *parent = nullptr);

signals:
};

#endif // TRAYMENU_H
