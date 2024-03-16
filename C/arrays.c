#include<stdio.h>
#include<string.h>
#include<time.h>

int main(){
	
	int arr[10000];
	int i,k;
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		k = rand() % 100 - 50;
		arr[i] = k;
	}
	for(i=0;i<10;i++){
		printf("%d. element= %d\n ", i,arr[i]);
	}
		
	for(i=0;i<10;i++){
	if(arr[i]<0){
		printf("negative %d\n ",arr[i]);
	}
	else{
		printf("positive %d\n ",arr[i]);
	}
}
	return 0;
}

