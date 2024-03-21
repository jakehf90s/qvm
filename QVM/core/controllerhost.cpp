#include "controllerhost.h"

ControllerHost::ControllerHost(QObject *parent)
    : IController{parent}
{}

void ControllerHost::handleMouseMove(qreal x, qreal y, qint8 screenIndex)
{
    IController::handleMouseMove(x, y, screenIndex);
}

void ControllerHost::handleKeyPressed(const char *key, const char *modifer1, const char *modifier2)
{

}
