#include<stdio.h>
#include<string.h>

int main(){
	int count;
	int size;
	printf("enter the size of the array: \n");
    scanf("%d", &size);
    
	int array[size],j,i,k;
	for(j=0;j<size;j++){
		printf("write the array: ");
		scanf("%d",&array[j]);}
		
	for(i=0;i<size;i++){
		int isidentical=0;	
		for(k=0;k<i;k++){
			if(array[k]==array[i]){
				isidentical=1;
				}
			}if(isidentical==0){
			count++;
		}
		}
	
	printf("%d",count);

	return 0;
}
