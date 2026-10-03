#include "Rational.h"
#include <iostream>
#include <sstream>

using namespace std;

void Rational::normalizeSign() {
    if (value.getSecond() < 0) {
        value.setFirst(-value.getFirst());
        value.setSecond(-value.getSecond());
    }
}

bool Rational::setDenominator(int den) {
    if (den == 0) {
        cerr << "помилка: «наменник не може дор≥внювати нулю!" << endl;
        return false; 
    }
    value.setSecond(den);
    normalizeSign();
    return true;
}

void Rational::setNumerator(int num) {
    value.setFirst(num);
}

void Rational::Init(int num, int den) {
    setNumerator(num);
    if (!setDenominator(den)) {
        setDenominator(1);
    }
}

void Rational::setPair(const Pair& p) {
    setNumerator(p.getFirst());
    if (!setDenominator(p.getSecond())) {
        setDenominator(1);
    }
}

Pair Rational::getPair() const {
    return value;
}

int Rational::getNumerator() const {
    return value.getFirst();
}

int Rational::getDenominator() const {
    return value.getSecond();
}

void Rational::Read() {
    int num, den;
    cout << "¬вед≥ть чисельник: ";
    cin >> num;
    setNumerator(num);

    do {
        cout << "¬вед≥ть знаменник (не 0): ";
        cin >> den;
    } while (!setDenominator(den));
}

void Rational::Display() const {
    cout << getNumerator() << "/" << getDenominator();
}

string Rational::toString() const {
    stringstream ss;
    ss << getNumerator() << "/" << getDenominator();
    return ss.str();
}

bool Rational::isEqual(const Rational& r) const {
    return (getNumerator() * r.getDenominator()) == (r.getNumerator() * getDenominator());
}

bool Rational::isNotEqual(const Rational& r) const {
    return !isEqual(r);
}

bool Rational::isGreater(const Rational& r) const {
    return (getNumerator() * r.getDenominator()) > (r.getNumerator() * getDenominator());
}

bool Rational::isLess(const Rational& r) const {
    return (getNumerator() * r.getDenominator()) < (r.getNumerator() * getDenominator());
}

bool Rational::isGreaterOrEqual(const Rational& r) const {
    return isGreater(r) || isEqual(r);
}

bool Rational::isLessOrEqual(const Rational& r) const {
    return isLess(r) || isEqual(r);
}