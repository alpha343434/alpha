#include <stdio.h>
#include <stdlib.h>
#define N 5

void factorial(int *num){
	int i;
	int ans=1;
	for(i=1;i<= *num;i++){
		ans *= i;
	}
	*num = ans;
}

int main(){
	int num =N;
	factorial(&num);
	printf("%d",num);
	
	return 0;
}
