#include<stdio.h>
#include<string.h>
#include<time.h>

int main(){
	
	int dizi[10000];
	int i,k;
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		k = rand() % 100 - 50;
		dizi[i] = k;
	}
	for(i=0;i<10;i++){
		printf("%d. element= %d\n ", i,dizi[i]);
	}
		
	for(i=0;i<10;i++){
	if(dizi[i]<0){
		printf("negative %d\n ",dizi[i]);
	}
	else{
		printf("positive %d\n ",dizi[i]);
	}
}
	return 0;
}

