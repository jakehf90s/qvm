#ifndef KEYBOARDMONITOR_H
#define KEYBOARDMONITOR_H

#include <QObject>

class KeyboardMonitor : public QObject
{
    Q_OBJECT
public:
    explicit KeyboardMonitor(QObject *parent = nullptr);
    void onKeyPressed(const char* key, const char* modifer1, const char* modifier2);
signals:
};

#endif // KEYBOARDMONITOR_H
