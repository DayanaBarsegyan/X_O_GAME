#include <QApplication>
#include "xogame.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    XOGame* a = new XOGame;
    a->show();
    return app.exec();
}
