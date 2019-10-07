#include "button.h"
#include "calculator.h"

#include <QtWidgets>
#include <cmath>

Calculator::Calcutor(QWidget *parent)
    : QWidget(parent)
{
    sumInMemory = 0.0;
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    waitingForOperand = true;

    display = new QLineEdit("0");
    display->setReadOnly(true);
    display->setAlighment(Qt::AlignRight);
    display->setMaxLength(15);
    
    QFont font = display->font();
    font.setPointSize(font.pointSize()+8);
    display->setFont(font);
    
    
}
