#include <iostream>
#include <cmath>
using namespace std;

class complexnum{
    private: //by default "encapculation"
    float x,y;

    public:
    complexnum();//default constructor
    complexnum(float a,float b); //another constructor
    float real(void);
    float im(void);
    float magnitude(void);
};

complexnum::complexnum(){
    x=0, y=0;
    cout<< "a";
}

float complexnum::real(void){
    return x;
}
float complexnum::im(void){
    return y;
}
float complexnum::magnitude(void){
    return x*x + y*y;
}

int main(){
    int x1;
    complexnum z1;
    return 0;
}
