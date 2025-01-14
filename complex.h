#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>
#include <QString>

using namespace std;


class complex
{
    double re, im;
public:
    complex();
    complex(double, double);

    complex operator*(complex);
    complex operator+(complex);
    complex operator-(complex);
    complex operator-();
    complex operator=(long);
    complex operator/(long);


   // Note:complex operator-(complex);
    bool operator<(complex);
    bool operator>(complex);
    friend complex sqrt (complex);
    friend ostream& operator<<(ostream&, complex);
    friend istream& operator>>(istream&, complex&);
    friend QString& operator<< (QString&, complex);

};

#endif // Note: COMPLEX_H
