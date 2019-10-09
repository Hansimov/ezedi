#include "videoplayer.h"

#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    VideoPlayer player;

    const QRect availableGeometry = QApplication::desktop()->availableGeometry(&player);
    player.resize(availableGeometry.width()/6, availableGeometry.height()/4);
    player.show();
    
    return app.exec();
}
