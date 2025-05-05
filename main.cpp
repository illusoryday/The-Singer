#include "TheSinger.h"
#include <QtWidgets/QApplication>
#include <httplib/httplib.h>
#include <search/search.h>
#include <API/API.h>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TheSinger w;
    w.show();
    return a.exec();
}
