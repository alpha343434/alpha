#include <stdio.h>

int main(){
	
	char ch1,ch2;
	
	printf("first character: ");
	ch1=getchar();
	getchar();
	printf("second character: ");
	ch2=getchar();
	
	float ha=2.0f/((1/(float)ch1)+(1/(float)ch2));
	printf("harmocin average of %c and %c is %f",ch1,ch2,ha);
	







return 0;
}
