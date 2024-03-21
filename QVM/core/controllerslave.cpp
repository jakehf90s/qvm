#include "controllerslave.h"

ControllerSlave::ControllerSlave(QObject *parent)
    : IController{parent}
{}

void ControllerSlave::handleMouseMove(qreal x, qreal y, qint8 screenIndex)
{

}

void ControllerSlave::handleKeyPressed(const char *key, const char *modifer1, const char *modifier2)
{

}
