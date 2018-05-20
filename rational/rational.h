#include <iostream>
using namespace std;

class Rational {
friend Rational operator +( const Rational &r,const Rational &a);
friend Rational operator -(const Rational &r,const Rational &a);
friend ostream & operator <<(ostream &,Rational &r);


public:
Rational  operator =(const Rational &r);

Rational();
Rational(int,int);


private:
int num;
int den;
};

