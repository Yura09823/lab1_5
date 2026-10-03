// lab1_5.cpp 
#include <iostream>
#include <Windows.h>
#include "Rational.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    cout << "--- Демонстрація класу Pair ---" << endl;
    Pair p1, p2;
    p1.Init(5, 10);
    p2.Init(5, 8);

    cout << "Пара 1: " << p1.toString() << endl;
    cout << "Пара 2: " << p2.toString() << endl;
    cout << "p1 більша за p2?: " << (p1.isGreater(p2) ? "Так" : "Ні") << endl;

    
    cout << "\n--- Демонстрація класу Rational ---" << endl;
    Rational r1;
    r1.Init(1, 2); // 1/2

    Rational r2;
    cout << "\nСтворення r2 через введення з клавіатури:" << endl;
    r2.Read();

    cout << "\nОб'єкти Rational:" << endl;
    cout << "r1 = "; r1.Display(); cout << endl;
    cout << "r2 = " << r2.toString() << endl;

    cout << "\nРезультати порівняння:" << endl;
    cout << "r1 == r2 : " << (r1.isEqual(r2) ? "Так" : "Ні") << endl;
    cout << "r1 != r2 : " << (r1.isNotEqual(r2) ? "Так" : "Ні") << endl;
    cout << "r1 > r2  : " << (r1.isGreater(r2) ? "Так" : "Ні") << endl;
    cout << "r1 < r2  : " << (r1.isLess(r2) ? "Так" : "Ні") << endl;
    cout << "r1 >= r2 : " << (r1.isGreaterOrEqual(r2) ? "Так" : "Ні") << endl;
    cout << "r1 <= r2 : " << (r1.isLessOrEqual(r2) ? "Так" : "Ні") << endl;

    
    cout << "\n--- Масив об'єктів Rational ---" << endl;
    
    Rational fractions[3];
    fractions[0].Init(3, 4);
    fractions[1].Init(1, -4); //-1/4


    cout << "\nСпроба ініціалізації знаменника нулем: " << endl;
    fractions[2].Init(5, 0);

    for (int i = 0; i < 3; i++) {
        cout << "Дріб [" << i << "]: " << fractions[i].toString() << endl;
    }

    return 0;
}