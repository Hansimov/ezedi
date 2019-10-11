#include "videoplayer.h"

#include <QApplication>
#include <QDesktopWidget>
#include <QSettings>
#include <QDebug>
#include <QMediaPlaylist>
#include <QVideoWidget>
#include <QMediaPlayer>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    VideoPlayer *player = new VideoPlayer;
    
    QCoreApplication::setOrganizationName("ezedi");
    QCoreApplication::setApplicationName("ezedi");
    player->startUp();
    
    
    return app.exec();
}
