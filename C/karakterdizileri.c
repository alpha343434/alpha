#include<stdio.h>

int main(){
	
	char karakterdizisi[]="oylesinedizi";
	char kullanicininki[10000];
	
	printf("%s\n",karakterdizisi);
	printf("dizi elemanlar�n� gir: ");
	scanf("%s",&kullanicininki);
	
	kullanicininki[0]='i'; //karakter de�i�imi yapt�m
	printf("%s",kullanicininki);
	
	return 0;
}
