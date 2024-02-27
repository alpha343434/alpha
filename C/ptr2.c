#include<stdio.h>
#include<stdlib.h>


int main(){
	 // ptr ++ = (ptr+1) 
	 
	// *(x+i) = x[i]
	int *p1;
	int dizi[5]={1,2,3,4,5};
	p1=dizi;
	
	printf("ikinci karakter %d\n",*(p1+1));
	
	char fr[7]="bonjour";
	char *ptr;
	ptr=fr;
	
	printf("%c",*ptr);
	
	return 0;
}
