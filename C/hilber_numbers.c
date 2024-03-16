#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int f(int x){return (x%4==1); }

int main(){
	int x,y;
	printf(" Enter a number to be tested:");
	scanf("%d",&x);
	
	y=f(x);
	printf(" Hilbert number: %d",y);

	return 0;
}
