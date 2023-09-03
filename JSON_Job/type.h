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
    Type(QString date, QString time, const QString &source, const QString &destination, ClassType type, const QString &message);

    QString date();
    void setDate();

    QString time();
    void setTime();

    QString source() const;
    void setSource(const QString &source);

    QString destination() const;
    void setDestination(const QString &destination);

    ClassType type() const;
    void setType(ClassType type);

    QString message() const;
    void setMessage(const QString &message);

    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;
    void print(int indentetion = 0) const;

private:
    QString mDate;
    QString mTime;
    QString mSource;
    QString mDestination;
    ClassType mType;
    QString mMessage;

};


#endif // TYPE_H
