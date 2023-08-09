#ifndef NAME_H
#define NAME_H

#include <QJsonObject>
#include <QVector>

class Inform
{
public:
    enum SaveFormat{
        Json, Binary
    };

    void newInform();
    bool loadInform(SaveFormat saveFormat);
    bool saveInform(SaveFormat saveFormat) const;

    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;

    void print(int indentation = 0) const;

private:

};

#endif // NAME_H
