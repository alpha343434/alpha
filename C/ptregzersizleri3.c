#include <stdio.h>
#include <stdlib.h>

void F(int *kucuk, int *buyuk){
	
	int dizi[10],i;
	printf("10 eleman giriniz");
	for(i=0;i<10;i++){
		
		scanf("%d",&dizi[i]);
	}
	
	int max= dizi[0];
	int min= dizi[0];
	for(i=0;i<10;i++){
		if(dizi[i]>max){
			max = dizi[i];
		}
		if(dizi[i]<min){
			min = dizi[i];
		}	
	}
	*buyuk = max;
    *kucuk = min;
}

int main(){

	int buyuk,kucuk;
	F(&kucuk,&buyuk);
	
	printf("en buyuk deger : %d",buyuk);
	printf("en kucuk deger : %d",kucuk);
	
	
	return 0;
}
