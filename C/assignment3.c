#include<stdio.h>
#include<math.h>
void dartboard(float a, char *shape,float *probability){
	float A,B,C,D,max;
	A=((a*a)/2) *(1/(1-(1.0/4))) / a*a ;
	B=((a*a*3* sqrt(3) /16)*(4.0/3.0)) / a*a*sqrt(3)/4;
	C=((((a*a*sqrt(3)/4)- (a*a*M_PI/12))) * (4.0/3.0)) / a*a*sqrt(3)/4.0;
	D=(((a*a) - (a*a*M_PI/4))/(4.0/3.0)) / a*a ;
	max=A;
	*probability = A; 
	*shape = 'A';
	if(max<B){
		*shape= 'B';
		*probability = B;
	}
	if(max<C){
		*shape= 'C';
		*probability = C;
	}
	if(max<D){
		*shape= 'D';
		*probability = D;
	}
}

int main(){
	float a;
	float probability;
	char shape;
	
	printf("please write the length of the edge (a)\n");
	scanf("%f",&a);
	
	dartboard(a,&shape,&probability);
	printf("figure you should choose: %c\n",shape);
	printf("winning probability:%f",probability);
	
	return 0;
}

