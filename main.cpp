#include "TheSinger.h"
#include <QtWidgets/QApplication>
#include <QIcon>
#include <httplib/httplib.h>
#include <SearchMusics/search.h>
#include <SearchMusics/API.h>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/.thesinger/The Singer.ico"));
    TheSinger w;
    w.show();
    return a.exec();
}
//https://www.icoconverter.com/