#ifndef ICONTROLLER_H
#define ICONTROLLER_H

#include <QObject>

struct CursorPos
{
    qreal x;
    qreal y;
    qint8 monitorIndex;
};

class IController : public QObject
{
    Q_OBJECT
public:
    explicit IController(QObject *parent = nullptr);
public slots:
    virtual void handleMouseMove(qreal x, qreal y, qint8 screenIndex);
    virtual void handleKeyPressed(const char* key,
                                  const char* modifer1, const char* modifier2) = 0;

protected:
    enum MaxxedType
    {
        mtNot,
        mtLeft,
        mtRight,
        mtTop,
        mtBot
    };

    MaxxedType _curMax;
    CursorPos _curPos;

signals:
};

#endif // ICONTROLLER_H
