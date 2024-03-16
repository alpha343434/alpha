#include<stdio.h>
#include<math.h>
#define PI 3.14

int findPaintedArea(float a, char figure){
	float result;
	switch(figure){
		case 'A':
			result= (a*a/2)*(4/3);
			break;
		case 'B':
			result= (a*a* sqrt(3)/2)*(1/(1-(1/4)));
			break;
		case 'C':
			result= ((a*a)*(3*sqrt(3) - PI)/12)/(1-(1/4));
			break;
		case 'D':
			result= ((a*a) - (a*a*PI/4))/(1-(1/4));
			break;
		default:
			printf("invalid figure.\n");
			break;
	}
	return result;
}

int main(){
	float a;
	char figure;
	float result;
	printf("please write the length of the edge (a)");
	scanf("%f",&a);
	
	printf("please write the figure(A,B,C,D)");
	scanf(" %c",&figure);
	
	result= findPaintedArea(a,figure);
	printf("sum of the painted areas: %f",result);
	
	return 0;
}
