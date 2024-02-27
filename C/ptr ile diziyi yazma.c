#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int dizi[3]={2,3,4};
	int *ptr,i;
	
	for(i=0;i<3;i++){
		
		printf("%4d",*(dizi+i));
	}
	
	
	return 0;
}
