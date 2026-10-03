#pragma once
#include "Pair.h"
#include <string>

using namespace std;

class Rational
{
private:
    Pair value; 
    void normalizeSign();

public:
    void Init(int num, int den);

    void Read();
    void Display() const;
    std::string toString() const;

    void setPair(const Pair& p);
    Pair getPair() const;

    void setNumerator(int num);
    bool setDenominator(int den); 

    int getNumerator() const;
    int getDenominator() const;

    bool isEqual(const Rational& r) const;
    bool isNotEqual(const Rational& r) const;
    bool isGreater(const Rational& r) const;
    bool isLess(const Rational& r) const;
    bool isGreaterOrEqual(const Rational& r) const;
    bool isLessOrEqual(const Rational& r) const;
};

