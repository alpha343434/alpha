#include <stdio.h> 

struct time{
	int hour;
	int minute;
	int second;
};

struct time function(int second){
	struct time t;
	
	t.hour= second/3600;
	t.minute= (second%3600) /60;
	t.second= (second%3600) %60;
	
	return t;
}

struct time differance(struct time t1,struct time t2){
	
	int second1= t1.hour*3600 + t1.minute*60 + t1.second;
	int second2= t2.hour*3600 + t2.minute*60 + t2.second;
	int diffsecond= second1 - second2;
	
	struct time diff;
	diff.hour= diffsecond/3600;
	diff.minute= (diffsecond%3600) /60;
	diff.second= (diffsecond%3600) %60;
	
	return diff;
}

int main() { 

	int minute_amount;
	struct time t;
	
	printf("enter seconds");
	scanf("%d",&minute_amount);
	t= function(minute_amount);
	printf("time is %d.%d.%d",t.hour,t.minute,t.second);

	struct time t1,t2;
	
    printf("enter the first time ");
    scanf("%d %d %d",&t1.hour,&t1.minute,&t1.second);
    printf("enter the second time ");
    scanf("%d %d %d",&t2.hour,&t2.minute,&t2.second);

    struct time diff = differance(t1,t2);
    printf("tiime differance %d.%d.%d",diff.hour,diff.minute,diff.second);

return 0;
}
