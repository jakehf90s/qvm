#ifndef CONTROLLERSLAVE_H
#define CONTROLLERSLAVE_H

#include "icontroller.h"

class ControllerSlave : public IController
{
    Q_OBJECT
public:
    explicit ControllerSlave(QObject *parent = nullptr);

public slots:
    virtual void handleMouseMove(qreal x, qreal y, qint8 screenIndex) override;
    virtual void handleKeyPressed(const char* key,
                                  const char* modifer1, const char* modifier2) override;
};

#endif // CONTROLLERSLAVE_H
