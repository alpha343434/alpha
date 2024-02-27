#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int dizi[5],x;
	
	while(x<6){
		scanf("%d",&dizi[x]);  //for da kullanabilirdim
		x++;
	}
	for(x=0;x<6;x++){
		printf("%d\t",dizi[x]);
	}
		
	return 0;
}
