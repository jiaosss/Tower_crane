#include "widget.h"
#include <QApplication>
#include <qsplashscreen.h>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("logo.png");
    pixmap.scaled(QSize(100,100), Qt::KeepAspectRatio);
    QSplashScreen splash(pixmap);
    splash.setDisabled(true);
    splash.show();
    Widget w;  

    w.show();
    splash.finish(&w);
    return a.exec();
}
