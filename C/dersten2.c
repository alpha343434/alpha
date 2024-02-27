#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	float a,b=180,b2=165,c=115,c2,A=120,A2=100,B,B2,C,C2;
	a=sqrt(b*b+c*c-2*b*c*cos(A*M_PI/180));
	printf("a= %f  ",a);
	B2=asin(b2*sin(A2*M_PI/180)/a);
	printf("B2= %f ",B2);
	C2=180-(A2+B2*180/M_PI);
	printf("C2= %f",C2);
	
	return 0;
}
