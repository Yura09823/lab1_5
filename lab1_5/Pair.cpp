#include "Pair.h"
#include <iostream>
#include <sstream>

using namespace std;

void Pair::Init(int f, int s) {
    setFirst(f);
    setSecond(s);
}

void Pair::setFirst(int f) {
    first = f;
}

void Pair::setSecond(int s) {
    second = s;
}

int Pair::getFirst() const {
    return first;
}

int Pair::getSecond() const {
    return second;
}

void Pair::Read() {
    int f, s;
    cout << "¬вед≥ть перше число: ";
    cin >> f;
    cout << "¬вед≥ть друге число: ";
    cin >> s;
    Init(f, s);
}

void Pair::Display() const {
    cout << "(" << first << ", " << second << ")";
}

std::string Pair::toString() const {
    stringstream ss;
    ss << "(" << first << ", " << second << ")";
    return ss.str();
}

bool Pair::isGreater(const Pair& p2) const {
    return (first > p2.getFirst()) || ((first == p2.getFirst()) && (second > p2.getSecond()));
}