#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <QObject>

class Serializer : public QObject
{
    Q_OBJECT
public:
    explicit Serializer(QObject *parent = nullptr);

signals:
};

#endif // SERIALIZER_H
