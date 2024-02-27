#include<stdio.h>

int main(){
	
	char a;
	printf("write a character");
	scanf("%c",&a);
	
	switch(a){
		case 'a': printtf("vowel");
		break;
		case 'e': printtf("vowel");
		break;
		case 'u': printtf("vowel");
		break;
		case 'i': printtf("vowel");
		break;
		case 'o': printtf("vowel");
		break;
		default: printf("consonant");
	}
		
	return 0;
}
