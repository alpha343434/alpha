
int CriticalPoint(int a,int b){
	
	char result;
	int x,y;
	int f=x*x*x + x*x*y - y*y - 4*y;
	int fx=3*x*x + 2*x*y;
	int fxx= 6*x + 2*y;
	int fy= x*x - 2*y - 4;
	int fyy= -2;
	int fxy= 2*x;
	
	if(fxx<0 && (fxx*fyy)- fxy*fxy){
		result='M';
	}
	if(fxx>0 && (fxx*fyy)- fxy*fxy){
		result='m';
	}
	if((fxx*fyy)- fxy*fxy <0){
		result='S';
	}
	if((fxx*fyy)- fxy*fxy =0){
		result='i';
	}
	if(fy==0 || fx==0){
		result=F;
	}
}

