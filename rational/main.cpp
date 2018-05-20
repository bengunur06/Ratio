#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
Rational r(11,22);
Rational y(1,1);

Rational w;
Rational l;
l=y-r;
w=y+r;

cout <<r<<endl<<y<<endl<<w<<endl<<l<<endl;
}

