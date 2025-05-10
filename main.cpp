#include "TheSinger.h"
#include <QtWidgets/QApplication>
#include <httplib/httplib.h>
#include <SearchMusics/search.h>
#include <SearchMusics/API.h>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TheSinger w;
    w.show();
    return a.exec();
}
