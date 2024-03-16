#include <iostream>
#include <cmath>
using namespace std;

// Complex Numbers z=x+yi

class ComplexNumber
{
    float x;
    float y;
  public:
    ComplexNumber();
    ComplexNumber(float a, float b);
    float real(void);
    float imag(void);
    float magnitude(void);
};

ComplexNumber::ComplexNumber()
{
    x=0;
    y=0;
};

ComplexNumber::ComplexNumber(float a, float b)
{
    x=a;
    y=b;
};

float ComplexNumber::real(void)
{
    return x;
};

float ComplexNumber::imag(void)
{
    return y;
};

float ComplexNumber::magnitude(void)
{
    return sqrt(x*x+y*y);
};

ComplexNumber operator+(ComplexNumber &cn1, ComplexNumber &cn2) // operator overloading
{
    float x=cn1.real()+cn2.real();
    float y=cn1.imag()+cn2.imag();
    return ComplexNumber(x,y);
};

ostream & operator<<(ostream &s, ComplexNumber &cn) // operator overloading
{
    s <<cn.real();
    if(cn.imag()<0)
        s <<cn.imag() <<"i";
    else
        s <<"+" <<cn.imag() <<"i";
    return s;
};


int main()
{
    ComplexNumber z1=ComplexNumber(3,4);
    ComplexNumber z2=ComplexNumber(2,-16);
    ComplexNumber z3;
    
    cout <<z1 <<endl <<z2 <<endl;
    //cout <<z3 <<endl;
    
    z3=z1+z2;
    cout <<"+____" <<endl <<z3;
    
    cout <<endl;
    return 0;
};
