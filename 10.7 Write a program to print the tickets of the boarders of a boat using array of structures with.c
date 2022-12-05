#include<stdio.h>
struct boat
{
    char name[39];
    int seatno;
    float fare;
}ticket[4];
int main()
{
   int i;
   struct boat ticket[4]={{"saiteja",1,50.53},{"harini",2,25.50},{"janaki",3,50.67},{"satyamurthy",4,55.55}};
   for(i=0;i<4;i++)
   {
       printf("ticket %d\n",i+1);
       printf("name:%s\nseat:%d\nfare:%f\n",ticket[i].name,ticket[i].seatno,ticket[i].fare);
       printf("\n");
   }
   return 0;
}
