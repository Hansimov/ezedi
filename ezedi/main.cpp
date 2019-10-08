#include "videoplayer.h"

#include <QApplication>
#include <QDesktopWidget>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    QCoreApplication::setApplicationName("EzEdi");
    QCoreApplication::setOrganizationName("Hansimov");
    QGuiApplication::setApplicationDisplayName(QCoreApplication::applicationName());
    QCoreApplication::setApplicationVersion("0.1.0");
    QCommandLineParser parser;
    parser.setApplicationDescription("An easy multimedia editor");
    parser.addHelpOption();
    parser.addVersionOption();
    parser.addPositionalArgument("url","The URL to open.");
    parser.process(app);
    
    VideoPlayer player;
    if (!parser.positionalArguments().isEmpty()) {
        const QUrl url = QUrl::fromUserInput(parser.positionalArguments().constFirst(), QDir::currentPath(), QUrl::AssumeLocalFile);
        player.setUrl(url);
    }
    
    const QRect availableGeometry = QApplication::desktop()->availableGeometry(&player);
    player.resize(availableGeometry.width()/6, availableGeometry.height()/4);
    player.show();
    
    return app.exec();
}
