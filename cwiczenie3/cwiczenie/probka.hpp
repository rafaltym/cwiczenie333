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
    <<friend>> operator<<(stream: std::ostream&,probka:const Probka&): std ::ostream&
};

#endif // PROBKA_HPP_INCLUDED
