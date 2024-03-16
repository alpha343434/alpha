#include <stdio.h>
#include <string.h>

int character(char *str){
	
	int count=0;
	
	while(*str != '\0'){
		count++;
		str++;
	}
	return count;
}
int main(){
	char str[100];
	
	printf("Bir dizi girin: ");
    gets(str);
		
	int count = character(str);
	
	printf("Dizinin karakter sayisi: %d\n", count);
	
	
	return 0;
}
