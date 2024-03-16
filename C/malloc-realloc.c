#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int k,i;
	
	printf("enter the size of array: ");
	scanf("%d",&k);
	
	int *array= (int*) malloc(k*sizeof(int));
	
	if(array==NULL){
		printf("failed");
		return 0;
	}
	
	for(i=0;i<k;i++){
		if(i% 2==0){
			array[i]=( 19*i+73)%k;
		
		}else{
			array[i]=(13*i+94)%k;
		}
	}
	
	float sum=0.0;
	
	for(i=0;i<k;i++){
		sum+= array[i];
		
	}
	float averagefirstArray= sum/k;
	printf("average of numbers: %.2f\n",averagefirstArray);
	
	array= (int*) realloc(array,2*k*sizeof(int));
	if(array==NULL){
		printf("failed");
		return 0;
	}
	
	for(i=k;i<2*k;i++){
		if(i%2==0){
			array[i]=(7*i+119)%(2*k);
			
		}else{
			array[i]=(11*i+29)%(2*k);
		}
	}
	
	sum=0.0;
	for(i=0;i<2*k;i++){
		sum+=array[i];
	}
	float averageExpendedNewArray= sum/(2*k);
	printf("average of all numbers: %.2f\n",averageExpendedNewArray);
	
	if (averagefirstArray>averageExpendedNewArray){
		printf("array has max average before expanded\n");
		
	}else{
		printf("array has max average after expanded\n");
	}
	
	free(array);
	
	return 0;
}

