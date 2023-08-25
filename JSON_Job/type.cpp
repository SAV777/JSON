#include <type.h>

#include <QMetaEnum>
#include <QTextStream>

Type::Type():
    mType(Info){
}


Type::Type(QDate date, QTime time, const QString &source,
                const QString &destination, Type::ClassType type, const QString &message):
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

Type::ClassType Type::type() const {
    return mType;
}

void Type::setType(Type::ClassType type){
    mType=type;
}

QString Type::message(){
    return mMessage;
}

void Type::setMessage(QString &message){
    mMessage=message;
}

void Type::read( QJsonObject &json){
    if (json.contains("date") && json["date"].isString())
        mDate=json["date"].toString();
    if (json.contains("time") && json["time"].isString())
        mTime=json["time"].toString();
    if (json.contains("source") && json["source"].isString())
        mSource=json["source"].toString();
    if (json.contains("destination") && json["destination"].isString())
        mDestination=json["destination"].toString();
    if (json.contains("type") && json["type"].isDouble())
        mType=ClassType(json["type"].toInt());
    if (json.contains("message") && json["message"].isString())
        mMessage=json["message"].toString();
}

void Type::write(QJsonObject &json) const {
    json["date"]=mDate;
    json["time"]=mTime;
    json["source"]=mSource;
    json["destination"]=mDestination;
    json["type"]=mType;
    json["message"]=mMessage;
}

void Type::print(int indentation) const{
    const QString indent(indentation * 2, ' ');
    QTextStream(stdout)<< indent << "Date:\t"<<mDate<<"\n";
    QTextStream(stdout)<< indent << "Time:\t"<<mTime<<"\n";
    QTextStream(stdout)<< indent << "Source:\t"<<mSource<<"\n";
    QTextStream(stdout)<< indent << "Destination:\t"<<mDestination<<"\n";
    QTextStream(stdout)<< indent << "Type:\t"<<mType<<"\n";
    QTextStream(stdout)<< indent << "Message:\t"<<mMessage<<"\n";
}










