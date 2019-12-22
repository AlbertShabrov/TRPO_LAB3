#ifndef TEST_QUADRATIC_EQUATION_H
#define TEST_QUADRATIC_EQUATION_H

#include <QtTest>
#include "quadratic_equation.h"
#include <QObject>

class Test_quadratic_equation : public QObject {
Q_OBJECT
private slots:
    void decision();
};

#endif // TEST_QUADRATIC_EQUATION_H
