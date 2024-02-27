#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>


int main(){
	
	int array[50],i,k,toplam=0;
	srand(time(NULL));
	
	for(i=0;i<50;i++){
		k = rand() % 116 - 36;
		array[i] = k;
		toplam+=k;
	}
	i=0;
	while(i<50){
		toplam+=array[i];
		i++;
	}
	int x=(toplam/50);
	printf("the x is %d\n",x);
	
	if(x<0){
		printf("the x is negative\n");
	}
	else if(x>0){
		printf("the x is positive\n");
	}
	else{
		printf("the x is zero\n");
	}
	for(i=0;i<50;i++){
		if(array[i]%2==0){
			printf("array[%d]=%d (even)\n",i,array[i]);
		}
}
	int ortustu=0;
	for(i=0;i<50;i++){
		if(array[i]>=x){
			ortustu++;		
		}
}printf("there are %d terms which are greater or even than x.",ortustu);
	return 0;
}
