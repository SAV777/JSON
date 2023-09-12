#include <name.h>

#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QTextStream>
#include "QTime"
#include "QDate"
#include "QDebug"
#include "QString"

Type Name::all() const
{
    return mAll;
}

void Name::newName(){

    mAll=Type();
    mAll.setDate();
    mAll.setTime();
    mAll.setSource(QStringLiteral("source"));
    mAll.setDestination(QStringLiteral("destination"));
    mAll.setType(Type::Info);
    mAll.setMessage(QStringLiteral("message"));
}
//????????????????
bool Name::loadName(Name::SaveFormat saveFormat){
    QFile loadFile(saveFormat==Json ? QStringLiteral ("YYYYMMDD_HHmmss.json") : QStringLiteral("YYYYMMDD_HHmmss.dat"));
    if(!loadFile.open(QIODevice::ReadOnly)){
        qWarning("Couldn't open save file.");
        return false;
    }
    QByteArray saveData = loadFile.readAll();

    QJsonDocument loadDoc(saveFormat == Json
        ? QJsonDocument::fromJson(saveData)
        : QJsonDocument::fromBinaryData(saveData));

    read(loadDoc.object());

    QTextStream(stdout) << "Loaded save for "
                        << loadDoc["all"].toString()
                        << " using "
                        << (saveFormat != Json ? "binary " : "") << "JSON...\n";
    return true;
}
//????????????????
bool Name::saveName(Name::SaveFormat saveFormat) const{
    QFile saveFile(saveFormat == Json
        ? QStringLiteral("YYYYMMDD_HHmmss.json")
        : QStringLiteral("YYYYMMDD_HHmmss.dat"));

    if (!saveFile.open(QIODevice::WriteOnly)) {
        qWarning("Couldn't open save file.");
        return false;
    }

    QJsonObject gameObject;
    write(gameObject);
    QJsonDocument saveDoc(gameObject);
    saveFile.write(saveFormat == Json
        ? saveDoc.toJson()
        : saveDoc.toBinaryData());

    return true;
}

void Name::read(const QJsonObject &json){
    if (json.contains("all") && json["all"].isObject())
        mAll.read(json["all"].toObject());
}

void Name::write(QJsonObject &json) const{
    QJsonObject allObject;
    mAll.write(allObject);
    json["all"]=allObject;
}

void Name::print(int indentation) const{
    const QString indent(indentation *2,' ');
    QTextStream(stdout)<<indent;
    mAll.print(indentation+1);
}
