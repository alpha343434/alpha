#include <stdio.h>
#include <string.h>
//bu kodun çalışıp çalışmadığını öğrenemedim
int main(){
	char str[100];
	char secilen, *ptr;
	
	printf("karakter dizisi:");
	gets(str);
	
	printf("cıkarilacak eleman:");
	scanf("%c",secilen);
	
	for(ptr=str; *ptr; ptr++){
		if(*ptr == secilen){
			strcpy(ptr,ptr+1);
		}
	}
	printf("dizinin son hali:%s",str);
	
	
	return 0;
}
