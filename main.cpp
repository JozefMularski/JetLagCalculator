#include "jetlag.h"
#include <QNetworkAccessManager>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JetLag w;
    w.show();
    return a.exec();
}
