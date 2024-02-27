#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

float FnAr(int *C,int size){
	int i;
	int M=C[0],m=C[0];
	
	for (i = 1; i < size; i++) {
        if (C[i] > M) {
            M = C[i];
        }
        if (C[i] < m) {
            m = C[i];
        }
    }
    int  Mm= (M+m)/2;
    return Mm;
}


int main(){
	int n,i,j;
	printf("write the n");
	scanf("%d",&n);
	
	if(n>20){
		return 1;
	}
	
	srand(time(NULL));
	int A[i][j];
	
	for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            A[i][j] = rand() % 26 - 10;  
    }
}
	 for (i = 0; i < n; i++) {
        for (j = 0; j <n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    int a=0;
	for (i = 0; i < n; i++) {
        for (j = 0; j <n; j++) {
            if(i==j){
            	a+= A[i][j];
			}
        }
    }
	printf("the value of alpha is %d\n",a);
	
	float B[i][j];
	
	for (i = 0; i < n; i++) {
        for (j = 0; j <n; j++) {
            if(A[i][j]>=0){
            	B[i][j]= 0 - (pow(A[i][j],1.0/3));
            	
			}else{
				B[i][j]= sqrt(abs(A[i][j]));
			}
        }
    }
	
	for (i = 0; i < n; i++) {
        for (j = 0; j <n; j++) {
            printf("%.2f ", B[i][j]);
        }
        printf("\n");
    }
	int k= n*n;
	int C[k];
	
	for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            C[k] = A[i][j];
            k++;
        }
    }
	for (k = 0; k < n* n; k++) {
        printf("%d\n", C[k]);
    }
    
    int Mm = FnAr(&C[k],k);
    
    printf("the value of Mm is %d",Mm);

	return 0;
}
