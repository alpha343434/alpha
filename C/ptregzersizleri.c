#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sayi, sayi2;
	int *ptr=0;
	
	printf("sayilar:");
	scanf("%d%d",&sayi,&sayi2);
	
	*ptr= sayi;
	sayi= sayi2;
	sayi2= *ptr;
	
	printf("%d %d %d",sayi,sayi2,*ptr);
	
	
	return 0 ;
}
