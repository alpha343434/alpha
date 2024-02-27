#include<stdio.h>
#include<stdlib.h>

void degistir(int *x, int *y){
	int gecici;
	gecici= *x;
	*x = *y;
	*y = gecici;
}


int main(){
	
	int x=3,y=4;
	printf("%d,%d",x,y);
	degistir(&x,&y);
	printf("%d,%d",x,y);
	return 0;
}
