#include <type.h>

#include <QMetaEnum>
#include <QTextStream>

Type::Type(QDate date, QTime time, QString &source,
                 QString &destination, QString &type, QString &message):
    mDate(date),
    mTime(time),
    mSource(source),
    mDestination(destination),
    mType(type),
    mMessage(message)
{
}

QDate Type::date(){
    return mDate;
}

void Type::setDate(QDate date){
    mDate=date;
}

QTime Type::time(){
    return mTime;
}

void Type::setTime(QTime time){
    mTime=time;
}

QString Type::source(){
    return mSource;
}

void Type::setSource(QString &source){
    mSource=source;
}

QString Type::destination(){
    return mDestination;
}

void Type::setDestination(QString &destination){
    mDestination=destination;
}

QString Type::type(){
    return mType;
}

void Type::setType(QString &type){
    mType=type;
}

QString Type::message(){
    return mMessage;
}

void Type::setMessage(QString &message){
    mMessage=message;
}














