#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define PI=3.0

float FunctApp(float x,float y){

	float h=(y-x)/4;
	float result;
	result= h/3 * (cos(x)+4*cos(x+h)+2*cos(x+2*h)+4*cos(x*3*h)+cos(y));
	return result;
}
int main(){
	
	float a,b,valueApp;
	
	printf("a and b:");
	scanf("%f%f",&a,&b);
	valueApp= FunctApp(a,b);
	printf("the valueApp is %f",valueApp);
	
	float valuereel=sin(a)-sin(b);
	printf("the valuereel is %f",valuereel);
	
	float err;
	err= abs(valuereel-valueApp);
	printf("the err is %f",err);
	return 0;
}
