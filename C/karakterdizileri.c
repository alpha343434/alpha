#include<stdio.h>

int main(){
	
	char karakterdizisi[]="oylesinedizi";
	char kullanicininki[10000];
	
	printf("%s\n",karakterdizisi);
	printf("dizi elemanlarýný gir: ");
	scanf("%s",&kullanicininki);
	
	kullanicininki[0]='i'; //karakter deðiþimi yaptým
	printf("%s",kullanicininki);
	
	return 0;
}
