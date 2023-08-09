#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc,argv);
    QStringList args=QCoreApplication::arguments();
    bool newRoad=true;
    if (args.length()>1)
        newRoad=(args[1].toLower() != QStringLiteral("load"));
    bool json = true ;
    if (args.length()>2)
        json = (args[2].toLower() != QStringLiteral("binary"));

//    Road road;
//    if (newRoad)
//        road.newRoad();
//    else if (!road.loadRoad(json ? Road::Json : Road::Binary))
//        return 1;

//    QTextStream(stdout)<< "Road ended:\n";
//    road.print();
//    if (!road.saveRoad(json ? Road::Json : Road::Binary))
//        return 1;
//    return 0;

}
