#ifndef SERVER_H
#define SERVER_H

#include <QUdpSocket>
#include <QObject>

class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
public slots:
    void handleUpdateCursor(qreal x, qreal y);
    void handleKeyPressed(const char* keyCode);

    void startListen(qint64 port, const QString& host = "0.0.0.0");
private:
    QUdpSocket _socket;

signals:
};

#endif // SERVER_H
