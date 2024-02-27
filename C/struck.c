#include <stdio.h>
main()
{
enum language {human=100,animal=50,computer};
enum days {SUN,MON,TUE,WED,THU,FRI,SAT};
printf("human: %d, animal: %d, computer: %d\n",human, animal, computer);
printf("SUN: %d\n", SUN);
printf("MON: %d\n", MON);
printf("TUE: %d\n", TUE);
printf("WED: %d\n", WED);
printf("THU: %d\n", THU);
printf("FRI: %d\n", FRI);
printf("SAT: %d\n", SAT);
return 0;
}

//typedef int tamsayi dersem mesela tüm intler yerine tamsayi yazabilrim
