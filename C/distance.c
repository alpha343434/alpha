#include<stdio.h>

int main(){
	
	char x1,x2,y1,y2;
	
	printf("enter the point:");
	scanf("%c,&c",&x1,&y1);
	getchar();
	
	printf("enter the 2. point:");
	scanf("%c,&c",&x2,&y2);
	getchar();
	
	int distance;
	distance=abs(x1-x2)-abs(y1-y2);
	
	printf("the distance %d",distance);
	
	
	return 0;
}
