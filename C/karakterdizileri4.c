#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char dizi[1000][1000]={"bir","iki","uc","dort"};
	
	printf("dorduncu eleman %s\n",dizi[3]);
	printf("dorduncu elemanin ucuncu karakteri %c\n",dizi[3][2]);
	
	return 0;
}
