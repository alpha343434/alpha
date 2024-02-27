#include <stdio.h>
#include <math.h>
#define PI 3.141593

int main() {
  int i;
  float rd;
   
for (i=0; i<=90; i+=5){
	rd=i*PI/180;
	printf("%5d %f\n",i,sin(rd));

}
   
   return 0;
}
