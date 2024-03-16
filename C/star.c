#include<stdio.h>

int main(){
	
	int i,j;
	int a[10];
	
	for(i=0;i<10;i++){
		printf("%d",i);
		for(j=0;j<i;j++){
			printf("%c",'*');
		}
		printf("\n");
	}
	
	return 0;
}
