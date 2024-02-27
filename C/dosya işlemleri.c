#include <stdio.h> 

int main() { 
		
	FILE *ddd;
	char isim[]="zehra";
	ddd= fopen("zehraa.txt","w");
	fprintf(ddd,"bu dosya deneme amacli %s",isim);
	fclose(ddd);
	
	FILE *dosya;
	dosya = fopen("carpim.txt","w");
	int i,j;
	
	for(i=0;i<=10;i++){
		for(j=0;j<=10;j++){
			fprintf(dosya,"%d %d %d\n",i,j,i*j);
		}fprintf(dosya,"\n");
	}
	fclose(dosya);
	return 0;
}

	if(dosya!=NULL){
		while(!feof(dosya)){ //dosyanýn sonuna gelinmediði sürece
			fscanf(dosya,"%s",&dizi[i])	;
			i++;
		}
		
	}else{
		printf("dosya bulunamadý");
	}
	char karakter; //dosyadaki metniz konsola yazma
	karakter=fgetc(dosya);
	
	while(karakter!=EOF){
		printf("%c",karakter);
		karakter=fgetc(dosya);
	}
	
	
	
	
	
	
	
	
