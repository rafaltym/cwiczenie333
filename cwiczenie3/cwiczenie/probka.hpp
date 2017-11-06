#ifndef PROBKA_HPP_INCLUDED
#define PROBKA_HPP_INCLUDED
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

class Probka
{
    public:
    double t;
    double x;
    Probka(double _t, double _x);
    void foo(int x);
    friend std::ostream& operator<<(std::ostream& stream, const Probka& probka);
};

#endif // PROBKA_HPP_INCLUDED
