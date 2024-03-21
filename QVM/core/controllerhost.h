#ifndef CONTROLLERHOST_H
#define CONTROLLERHOST_H

#include "icontroller.h"

class ControllerHost : public IController
{
    Q_OBJECT
public:
    explicit ControllerHost(QObject *parent = nullptr);
public slots:
    virtual void handleMouseMove(qreal x, qreal y, qint8 screenIndex) override;
    virtual void handleKeyPressed(const char* key,
                                  const char* modifer1, const char* modifier2) override;

private:

};

#endif // CONTROLLERHOST_H
