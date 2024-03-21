#include "icontroller.h"

IController::IController(QObject *parent)
    : QObject{parent}
{}

void IController::handleMouseMove(qreal x, qreal y, qint8 screenIndex)
{
    _curPos.monitorIndex = screenIndex;
    _curPos.x = x;
    _curPos.y = y;
}
