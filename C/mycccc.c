#include<stdio.h>

int main(){
	
	int i;
	
	for(i=0;i<10;i++){
		
		if(i==2){
			continue; //continueyu g�r�nce atlayarak devam eder break yazsayd�m iki ve sonras� �al��mazd�
		}
		printf("%d\n",i);
	}
	
	
	
	
	
	return 0;
}
