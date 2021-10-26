#include "widget.h"
#include <QApplication>
#include <qsplashscreen.h>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //启动界面logo
    QPixmap pixmap("logo.png");
    pixmap.scaled(QSize(100,100), Qt::KeepAspectRatio);
    QSplashScreen splash(pixmap);
    splash.setDisabled(true);
    splash.show();

    //显示主窗口
    Widget w;  
    splash.finish(&w);
    w.show();
    return a.exec();
}
