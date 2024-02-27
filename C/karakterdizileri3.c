#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char bos[1000];
	
	strcpy(bos,"ZEHRA");
	strcat(bos,"ismine sahibim"); //karakter,dizi atamasý yapar
	
	printf("%s\n",bos);
	printf("tersi: %s\n",strrev(bos));
	//reverse :ters çevirme
	printf("kucuk harflisi: %s\n",strlwr(bos));//lower
	printf("buyuk harflisi: %s\n",strupr(bos));//upper
	printf("kucuk harflisi: %s\n",strlwr(bos));
	
	return 0;
}
