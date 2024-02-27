#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int Record(FILE *dosya3,int linecount){
	int code,i;
	char num1_2[10];
	for(i=0;i<linecount;i++){
		if(num1_2[i]== '212'){
			code++;
	}	
}return code;
}


int main(){
	
	FILE *dosya1;
	dosya1 = fopen("customer.txt","r");
	int sira[10],i,linecount=0;
	char soyad[10],ad[10],num1[10],num2[10];
	if(dosya1!=NULL){
		while(!feof(dosya1)){ 
			fscanf(dosya1,"%d %s %s %s %s",&sira[i],&soyad[i],&ad[i],&num1[i],&num2[i]);
			i++;
			if(sira== '\n'){
				linecount++;
			}
		}	
	}else{
		printf("dosya bulunamadi");
		return 1;
	}
	fclose(dosya1);

	
	printf("there are %d records in the costumor file.",linecount);
	FILE *dosya2;
	dosya2= fopen("names.txt","w");
	
	if(dosya2== NULL){
		printf("Dosya açilamadi.\n");
        return 1;
	}
	char soyad2[100],ad2[100];
	for(i=0;i<linecount;i++){
		soyad2[i]= toupper(soyad[i]);
		}
	for(i=0;i<linecount;i++){
		ad2[i]= toupper(ad[i]);
			
		}
		fprintf(dosya2,"%s %s",ad2,strlen(soyad2)-1);
		
	}
	
	FILE *dosya3;
	dosya3= fopen("numbers.txt","w");
	
	if(dosya3== NULL){
		printf("Dosya açilamadi.\n");
        return 1;
	}
	char num1_2[100],num2_2[100];
	
	while(!feof(dosya1)){ 
			fprintf(dosya3,"   %s %s",&num1_2[i],&num2_2[i]);
			i++;
	}
	int code = Record(dosya3,linecount);
	printf("there are %d 212",code);
	
	return 0;
}
