#ifndef TYPE_H
#define TYPE_H

#include <QJsonObject>
#include <QObject>
#include <QString>
#include <QDate>
#include <QTime>



class Type
{
public:
    Type(QDate date, QTime time, QString &source, QString &destination, QString &type, QString &message);



private:
    QDate mDate;
    QTime mTime;
    QString mSource;
    QString mDestination;
    QString mType; // можно ли сделать QDebug?
    QString mMessage;

}


#endif // TYPE_H
