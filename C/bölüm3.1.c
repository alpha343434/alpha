#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,i;
	float sum=0;
	printf("n= ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum+=(float)(1/i);
	}
	printf("%f",sum);
	return 0;
}
