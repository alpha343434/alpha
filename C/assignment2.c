#include<stdio.h>
#include<math.h>
char maxPaintedAreaN(float a, int N){
	float A,B,C,D,max;
	A=((a*a)/2) *((1-pow(1.0 / 4.0, N))/(1-(1.0/4)));
	B=(a*a*3*(sqrt(3))/16)* ((1-pow(1.0 / 4.0, N))/(1-(1.0/4)));
	C=(((a*a*sqrt(3)/4)- (a*a*M_PI/12))) * ((1-pow(1.0 / 4.0, N))/(1-(1.0/4)));
	D=((a*a) - (a*a*M_PI/4))/((1-pow(1.0 / 4.0, N))/(1-(1.0/4)));
	max=A;
	char figure = 'A';
	if(max<B){
		max=B;
		figure = 'B';
	}
	if(max<C){
		max=C;
		figure = 'C';
	}
	if(max<D){
		max=D;
		figure = 'D';
	}
	return figure;
}

int main(){
	int N;
	float a;
	printf("please write the length of the edge (a): ");
	scanf("%f",&a);
	
	printf("please write the N: ");
	scanf("%d",&N);
	
	char figure;
	figure= maxPaintedAreaN(a,N);
	printf("%c has maximum area",figure);
	
	return 0;
}
