#include <stdio.h>
int main() {
	int a=1,b=0,c=3,dist,i;
	
	dist= b*b-4*a*c;
	if(dist>0)i='$';
	else if(dist==0)i='!' ;
	else i='+' ;
	
	
	switch(i){
		case '$': printf("x1,x2"); break;
		case '!': printf("x1=x2"); break;
		case '+': printf("komlex"); break;
	}

return 0;}
