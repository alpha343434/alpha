#include<stdio.h>
#include<time.h>

int triangle(int a,int b,int c){
	if (a + b > c && a + c > b && b + c > a) {
    return 1;}
    return 0;
}
int main(){
	int x,a,b,c,y;
	printf("wire :");
	scanf("%d",&x);
	
	
	srand(time(NULL));
	
	a= 1+(rand()%(int)(x*0.8));
	b= 1+ rand()%(int)((x-a)*0.8);
	c= x-a-b;
	printf("a:%d  b:%d  c:%d",a,b,c);
	y=triangle(a,b,c);
	printf("y:%d",y);
	
	
	return 0;
}
