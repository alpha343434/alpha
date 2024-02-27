#include <stdio.h> 
#include <string.h>

void F(char *s,int *m,int *n){
	int len= strlen(s);
	int D=0,R=0,i;
	
	for(i=0;i<len;i++){
		if(s[i]=='D'){
			D++;
		}else{
			R++;
		}
	}
	*m=D+1;
	*n=R+1;
}

main() { 
	char s[81];
	int m, n;
	scanf("%s",s);
	
	F(s, &m, &n);
	printf("%d, %d",m,n);

return 0; 
}
