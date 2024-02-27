#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a,b,sonuc=0;
	printf("degeri gir: ");
	scanf("%d",&a);
	
	b=1;
	while(a>=b){
		
		if(a==b){
			printf("%d",a);
		}
		else{
			printf("%d + ",b);
		}
		sonuc+=b;
		b++;
		
	}
	printf("=%d",sonuc);
	
	
	return 0;
}
