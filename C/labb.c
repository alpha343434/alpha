#include<stdio.h>
int hasMidpoint(int a,int b,int c){
	if((float)(a+b)/2==(float)c){
		return 1;
	}
	if(((float)(a+c)/2)==(float)b){
		return 1;
	}
	if(((float)(b+c)/2)==(float)a){
		return 1;
	}
	return 0;
}
int main(){
	int a,b,c,midpoint;
	printf("write the numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	midpoint=hasMidpoint(a,b,c);
	printf("midpoint:%d",midpoint);
	return 0;
}


