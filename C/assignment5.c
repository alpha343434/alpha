#include<stdio.h>
#include<math.h>

float findPaintedArea(float a, char figure){
	float result;
	switch(figure){
		case 'A':
			result= ((a*a)/2) *(1/(1-(1.0/4)));
			break;
		case 'B':
			result= (a*a*3*(sqrt(3))/16)*(1/(1-(1.0/4)));
			break;
		case 'C':
			result= (((a*a*sqrt(3)/4)- (a*a*M_PI/12))) * (1.0/(1-(1.0/4)));
			break;
		case 'D':
			result= ((a*a) - (a*a*M_PI/4))/(1.0-(1.0/4));
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
	
	printf("please write the figure(A,B,C,D)");
	scanf(" %c",&figure);
	
	printf("please write the length of the edge (a)");
	scanf("%f",&a);
	
	float result;
	result= findPaintedArea(a,figure);
	printf("sum of the painted areas: %.6f",result);
	
	return 0;
}
