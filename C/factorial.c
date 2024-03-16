#include<stdio.h>
#include<stdlib.h>


int function(int a){
	int answer=1,i;
	for(i=1;i<=a;i++){
		answer*=i;
	}return answer;
}


int main(){
	
	int x;
	scanf("%d",&x);
	printf("%d",function(x));
	
	return 0 ;
}
