#include<stdio.h>
#include<stdlib.h>


int fonksiyon(int a){
	int answer=1,i;
	for(i=1;i<=a;i++){
		answer*=i;
	}return answer;
}


int main(){
	
	int x;
	scanf("%d",&x);
	printf("%d",fonksiyon(x));
	
	return 0 ;
}
