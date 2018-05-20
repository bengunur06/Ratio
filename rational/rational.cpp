#include <iostream>
#include "rational.h"

using namespace std;
Rational::Rational(){num=den=0;}

Rational::Rational(int a,int b)
{
num=a;
den=b;
}

Rational operator +(const  Rational &r,const Rational &a)
{
Rational b;
b.num=r.num*a.den+a.num*r.den;
b.den=r.den*a.den;

return b;
}

Rational operator -(const Rational &r,const Rational &a)
{
Rational b;
b.num=r.num*a.den-a.num*r.den;
b.den=r.den*a.den;

return b;
}

ostream & operator <<(ostream &,Rational &r)
{
cout<<r.num<<"/"<<r.den;
}

Rational  Rational::operator =(const Rational &r)
{
num=r.num;
den=r.den;
return *this;

}












