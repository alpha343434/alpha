#include <stdio.h>
#include <math.h>

int ISBN(long long int isbn){
	int i,digit,checkdigit,sum=0;
	checkdigit=isbn%10;
	for(i=0;i<=10;i++){
		digit= isbn%10;
		sum += i* digit;
		isbn /=10;
	}
	
	if(checkdigit == sum%10){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	long long int isbn;
	printf("enter isbn:");
	scanf("%lld",&isbn);
	
	if(ISBN(isbn)){
		printf("valid");
	}else{
		printf("not valid");
	}
	
	return 0;
}
