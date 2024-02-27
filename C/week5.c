#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	int x,y;
	
	y=time(NULL);
	srand(time(NULL));
	x=75+rand()%156;  //75 ve 230 arasýnda deðerler üretir
	
	printf("%d\n",x);
	printf("%d",y);
	return 0;
}
