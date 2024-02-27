#include <stdio.h>
#include <math.h>

int main(){
	/*
	int ucboyutludizi[2][3][1]={{{1},{2}},{{4},{3}}};
	printf("%d",ucboyutludizi[0][0][0]);
	*/
	
	int dizi[2][3][2];
	int i,j,k;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				scanf("%d",&dizi[i][j][k]);
			}
		}
	}
	
	printf("girilen degerler:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				printf("dizi[%d][%d][%d] = %d\n",i,j,k,dizi[i][j][k]);
			}
		}
	}
	
	
	return 0;
}
