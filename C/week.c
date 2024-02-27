#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	int x,y;
	
	y=time(NULL);
	srand(time(NULL));
	x=rand();
	
	printf("%d\n",x);
	printf("%d",y);
	return 0;
}
