#ifndef TYPE_H
#define TYPE_H

#include <QJsonObject>
#include <QObject>
#include <QString>
#include <QDate>
#include <QTime>

class Type
{
    Q_GADGET;

public:
    enum ClassType {
        Info, Debug, Warning, Error
    };

    Q_ENUM(ClassType)

    Type();
    Type(QDate date, QTime time, const QString &source, const QString &destination, ClassType type, const QString &message);

    QDate date();
    void setDate(QDate date);

    QTime time();
    void setTime(QTime time);

    QString source();
    void setSource(QString &source);

    QString destination();
    void setDestination(QString &destination);

    ClassType type() const;
    void setType(ClassType type);

    QString message();
    void setMessage(QString &message);

    void read(QJsonObject &json);
    void write(QJsonObject &json) const;
    void print(int indentetion = 0) const;

private:
    QDate mDate;
    QTime mTime;
    QString mSource;
    QString mDestination;
    ClassType mType;
    QString mMessage;

};


#endif // TYPE_H
