#ifndef NAME_H
#define NAME_H

#include <QJsonObject>
#include <QVector>

#include<type.h>

class Name
{
public:
    enum SaveFormat{
        Json, Binary
    };
    Type all() const;
    void newName();
    bool loadName(SaveFormat saveFormat);
    bool saveName(SaveFormat saveFormat) const;

    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;

    void print(int indentation = 0) const;
private:
    Type mAll;
};

#endif // NAME_H
