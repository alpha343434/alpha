#include<stdio.h>
#include<string.h>
#include<time.h>

int main(){
	
	int dizi[10000];
	int i,k,j;
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		k= rand() %100-50;
		scanf("%d",&dizi[k]);
	}
	for(i=0;i<10;i++){
		
		printf("%d ",dizi[k]);
	}
	
	
	
	return 0;
}
