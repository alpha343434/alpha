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
