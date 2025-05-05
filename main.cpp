#include "TheSinger.h"
#include <QtWidgets/QApplication>
#include <httplib/httplib.h>
#include <search/search.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TheSinger w;
    w.show();
    GetAPI();
    return a.exec();
}
