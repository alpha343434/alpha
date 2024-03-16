#include<stdio.h>

int main(){
	
	int yas;
	printf("yasınızı girini");
	scanf("%d",&yas);
	
	if(yas>=18){
		
		printf("oy kullanabilir");
	}
	else{printf("kullanamaz");
	}
	return 0;
}
