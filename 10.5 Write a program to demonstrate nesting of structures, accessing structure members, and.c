#include <stdio.h>
struct first /* declaration of fi rst structure */
{
int in1; /* member of fi rst */
float in2; /* member of fi rst */
};
struct second /* declaration of second structure */
{
int out1; /* member of second */
float out2; /* member of second */
struct first inf; /* structure_variable of fi rst structure */
};
int main()
{
struct second outs; /* structure_variable of second structure */
outs.out1= 2; /* assigning values to members */
outs.out2= 10.57; /* assigning values to members */
outs.inf.in1= 2* outs.out1;
outs.inf.in2= outs.out2 + 3.65;
printf("out1=%d, out2=%6.2f, in1=%d, in2=%6.2f",outs.out1, outs.out2, outs.inf.in1,outs.inf.in2);
return 0;
}

