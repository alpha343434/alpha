#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int array[100];
	int *ptr,i,N;
	ptr=array;
	
	printf("eleman sayisi:");
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",ptr);
		ptr++;
	}
	ptr=array;
	for(i=0;i<N;i++){
		printf("%d",*ptr);
		ptr++;
	}
	
	
	return 0;
}
