#include <stdio.h>
struct employee
{
char grade;
int basic;
float allowance;
};
int main()
{
struct employee ramesh = {'b', 5750, 818.75};
struct employee vivek = {'b', 6500, 812.5};
if(ramesh.grade!= vivek.grade)
printf("Ramesh and Vivek are employed on different grades");
else if((ramesh.basic+ramesh.allowance)>(vivek.basic+vivek.allowance))
printf("Ramesh is senior and his total remuneration is Rs%f",(ramesh.basic+ramesh.allowance));
else if((ramesh.basic+ramesh.allowance)==(vivek.basic+vivek.allowance))
printf("Ramesh and Vivek get the same total remuneration of Rs%f",(ramesh.basic+ramesh.allowance));
else
printf("Vivek is senior and his total remuneration is Rs%f",(vivek.basic+vivek.allowance));
return 0;
}

