#include <QtTest>
#include <quadratic_equation.h>
#include <test_quadratic_equation.h>
#include <QObject>

void Test_quadratic_equation::decision()
{
    quadratic_equation KV;
    QCOMPARE(KV.decision("0", "0","0"), "Корни любые");
    QCOMPARE(KV.decision("3", "0","0"), "0");
    QCOMPARE(KV.decision("11", "0","9"), "Корней нет");
    QCOMPARE(KV.decision("-1", "0","36"), "6  -6");
    QCOMPARE(KV.decision("1", "3","0"), "0  -3");
    QCOMPARE(KV.decision("1", "-70","600"), "60  10");
    QCOMPARE(KV.decision("-4", "28","-49"), "3.5");
    QCOMPARE(KV.decision("5", "6","2"), "Корней нет");
    QCOMPARE(KV.decision("a", "1","2"), "Неверный ввод");
    QCOMPARE(KV.decision("0", "b","2"), "Неверный ввод");
    QCOMPARE(KV.decision("3", "1","c"), "Неверный ввод");
    QCOMPARE(KV.decision("a", "b","c"), "Неверный ввод");
    QCOMPARE(KV.decision("2", "-3","-2"), "2  -0.5");
    QCOMPARE(KV.decision("3", "5","-2"), "0.333333  -2");
}

QTEST_MAIN(Test_quadratic_equation);
