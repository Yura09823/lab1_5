#pragma once
#include <string>

using namespace std;

class Pair
{
private:
    int first;
    int second;

public:
    void Init(int f, int s);

    void Read();
    void Display() const;
    string toString() const;

    void setFirst(int f);
    void setSecond(int s);

    int getFirst() const;
    int getSecond() const;

    bool isGreater(const Pair& p2) const;
};

