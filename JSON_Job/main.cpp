#include <QCoreApplication>
#include <QTextStream>
#include <name.h>
#include <QFile>
#include <QDir>


//static QScopedPointer<QFile>   m_logFile;


//void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
//{
//    // Открываем поток записи в файл
//    QTextStream out(m_logFile.data());

//    // По типу определяем, к какому уровню относится сообщение
//    switch (type)
//    {
//    case QtInfoMsg:     out << "INF "; break;
//    case QtDebugMsg:    out << "DBG "; break;
//    case QtWarningMsg:  out << "WRN "; break;
//    case QtCriticalMsg: out << "CRT "; break;
//    case QtFatalMsg:    out << "FTL "; break;
//    }
//    // Записываем в вывод категорию сообщения и само сообщение
//    out << context.category << ": " << msg << endl;
//    out.flush();    // Очищаем буферизированные данные
//}
//// Включение\отключение записи дебага в файл в зависимости от настроек приложения
//void debugToFileFunc(QStringList arg) {
//    if(arg.length() > 0) {
//        for(auto &m : arg)
//            if(m.contains("debug_on")) {
//                // Устанавливаем файл логирования,
//                // внимательно сверьтесь с тем, какой используете путь для файла
//                m_logFile.reset(new QFile(QDir::currentPath()+ "/APP_DEBUG_LOG.txt"));
//                // Открываем файл логирования
//                m_logFile.data()->open(QFile::Append | QFile::Text);
//                m_logFile->resize(0);
//                // Устанавливаем обработчик
//                qInstallMessageHandler(messageHandler);
//            }
//    }
//}

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
