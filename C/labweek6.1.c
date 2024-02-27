#include<stdio.h>
#include<math.h>

void triangletype(int a,int b,int c){
	
	if(a==b && a==c)  printf("equilateral triangle");
	else if(a!=b && b!=c)  printf("scalene triangle");
	else printf("isosceles triangle");
}


int main(){
	
	int a,b,c;
	printf("write the edge lengths:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	triangletype(a,b,c);
	
	return 0;
}
