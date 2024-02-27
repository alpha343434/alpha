#include<stdio.h>

int find_max(int a,int b,int c);
int main(){
	
	int a,b,c;
	printf("write the numbers:");
	scanf("%d %d %d",&a,&b,&c);
	
	int max=find_max(a,b,c);
	printf("max: %d",max);
	
	return 0;
}
int find_max(int a,int b,int c){
	int max=a;
	if(max<b)max=b;
	if(max<c)max=c;
	return max;
}
