#include<stdio.h>
#include<math.h>

float simplecalculator(float x,float y,char a){
	float result;
	switch(a){
		case '+' :result= x+y; break;
		case '-' :result= x-y; break;
		case '*' :result= x*y; break;
		case '/' :result= x/y; break;
	}
	return result;
}


int main(){
	
	float x,y,result;
	char a;
	
	printf("number:");
	scanf("%f",&x);
	printf("number:");
	scanf("%f",&y);
	printf("select(+,-,*,/): ");
	scanf(" %c",&a);
	
	result= simplecalculator(x,y,a);
	printf("%.2f %c %.2f  = %.2f", x,a,y,result);
	
	return 0;
}
