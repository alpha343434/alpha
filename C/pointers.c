#include<stdio.h>

int main(){
	
	int *pointer;
	int z=20;
	
	pointer=&z;
	
	printf("%d\n",*pointer);
	printf("%d\n",pointer);
	printf("%d\n",&z);
	printf("%p\n",pointer);
	printf("%p\n",&z);
	printf("%p\n",*&pointer);
	printf("%p\n",&*pointer);
	return 0;
}
