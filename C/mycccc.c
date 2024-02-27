#include<stdio.h>

int main(){
	
	int i;
	
	for(i=0;i<10;i++){
		
		if(i==2){
			continue; //continueyu görünce atlayarak devam eder break yazsaydým iki ve sonrasý çalýþmazdý
		}
		printf("%d\n",i);
	}
	
	
	
	
	
	return 0;
}
