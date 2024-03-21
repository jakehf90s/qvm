#ifndef IFILETRANSFER_H
#define IFILETRANSFER_H

#include <QObject>

class IFileObject
{

};

class IFileTransfer : public QObject
{
    Q_OBJECT
public:
    int status() const { return _status; }

    virtual void sendFile(IFileObject* file) = 0;
    virtual void receiveFile(IFileObject* file) = 0;

protected:
    int _status;
signals:
    void onStarted();
    void onDone();
};

#endif // IFILETRANSFER_H
