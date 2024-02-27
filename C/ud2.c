#include<stdio.h>
#include<stdlib.h>


int makine(int a,int b,int toplam,int cikarma,int carpma,int bolme){
	
	toplam=a+b;
	cikarma=a-b;
	carpma=a*b;
	bolme=a/b;
	
	
}

int main(){
	int a,b,islem,t,toplam;
	printf("sayilarý gir: ");
	scanf("%d %d",&a,&b);
	
	printf("islem");
	scanf("%d",&islem);
	if(islem==t){
		printf("%d",makine(toplam));
	}
	
	
	return 0;  
}



