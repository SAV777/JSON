#include <QCoreApplication>
#include <QTextStream>
#include <name.h>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc,argv);
    QStringList args=QCoreApplication::arguments();
    bool newName =true;
    if (args.length()>1)
        newName=(args[1].toLower() != QStringLiteral("load"));
    bool json = true ;
    if (args.length()>2)
        json = (args[2].toLower() != QStringLiteral("binary"));

    Name name;
    if (newName)
        name.newName();
    else if (!name.loadName(json ? Name::Json : Name::Binary))
            return 1;
    name.print();
    if (!name.saveName(json ? Name::Json : Name::Binary))
        return 1;
    return 0;

}
