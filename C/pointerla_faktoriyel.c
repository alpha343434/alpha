#include <stdio.h>
#include <stdlib.h>
#define N 5

void faktoriyel(int *sayi){
	int i;
	int sonuc=1;
	for(i=1;i<= *sayi;i++){
		sonuc *= i;
	}
	*sayi = sonuc;
}

int main(){
	int sayi =N;
	faktoriyel(&sayi);
	printf("%d",sayi);
	
	return 0;
}
