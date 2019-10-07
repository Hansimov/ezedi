#include <QApplication>
#include "calculator.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Calcutor calc;
    calc.show();
    return app.exec();
}
