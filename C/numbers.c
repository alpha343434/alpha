#include<stdio.h>
#include<string.h>
#include<time.h>

int main(){
	
	int dizi[10];
	int i,k,odd=0,even=0,indexodd=0,indexeven=0,positive=0,negative=0;
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		k = rand() % 101 - 50;
		dizi[i] = k;
	}
	
	for(i=0;i<10;i++){
		printf("%d. element %d\n",i, dizi[i]);
	}	
	
	for(i=0;i<10;i++){
		if(dizi[i]>0){
			positive++;
		}
		else{
			negative++;
		}}
	for(i=0;i<10;i++){
		if(dizi[i]%2==0){
			even+= dizi[i];
		}
		else{
			odd+= dizi[i];
		}}
	for(i=0;i<10;i++){
		if(i%2==0){
			indexeven+= dizi[i];
		}
		else{
			indexodd+= dizi[i];
		}}
	
	printf("sum of positive numbers: %d\n",positive);
	printf("sum of negative numbers: %d",negative);
	
	printf("sum of even numbers: %d\n",even);
	printf("sum of odd numbers: %d\n",odd);
	
	printf("even index: %d\n",indexeven);
	printf("odd index: %d\n",indexodd);
	
	return 0;
}

