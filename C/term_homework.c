// ZEHRA AYDIN
//TASK 1

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

//TASK2

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


//TASK 3


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


// TASK 4


#include<stdio.h>
#include<math.h>

int main(){
	float a;
	printf("please write the length of the edge (a)");
	scanf("%f",&a);
	
	char letters[100];
	int A=0,B=0,C=0,D=0,i=0;
	printf("please write the letters");
	scanf("%s",letters);
	
	 while (letters[i] !='\0') {
        switch (letters[i]) {
            case 'A':
                A++;
                break;
            case 'B':
                B++;
                break;
            case 'C':
                C++;
                break;
            case 'D':
                D++;
                break;
            default:
                printf("invalid figure: %c\n", letters[i]);
                break;
        }
        i++;
    }
    float pA=((a*a)/2) *(1/(1-(1.0/4)));
    float pB=(a*a*3*(sqrt(3))/16)*(1/(1-(1.0/4)));
    float pC=(((a*a*sqrt(3)/4)- (a*a*M_PI/12))) * (1/(1-(1.0/4)));
    float pD=((a*a) - (a*a*M_PI/4))/(1-(1.0/4));
    float pX= (A*pA) + (B*pB) + (C*pC) + (D*pD);
    printf("painted area of the figure X: %f",pX);
  	
	return 0;
}
