#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
/*	
char karakterdizisi[]="oylesinedizi";
	
printf("karakterin uzunlugu: %d\n",strlen(karakterdizisi));
printf("normalde uzunluk bulmak icin kullanilan: %d",sizeof(karakterdizisi));

strcmp k�yas i�in
strncmp ilk ka� karakteri k�yaslamak istiyorsak
  yaz�m �rne�i: sonuc= strncmp(dizi1,dizi2,4)

*/
	char dizi[]="zeraydin1508";
	char dizi2[1000];
	
	strcpy(dizi2,dizi); // ne kadar say�sa karakter atamak istedi�im
	printf("%s",dizi2);
	


	
	return 0;
}
