#include<stdio.h>
int main()
{
    printf("PRECEDENCE IN ARITHMATIC OPERATORS\n");
    int a=4,b=6,c=3,d,e,f,g;
    d=-a+b*c;
    e=(a+b)*c;
    f=(a*b)/c;
    g=a*(b/c);
    printf("a=4,b=3,c=3,d,e,f,g \n");
    printf("d=   %d=-%d+%d*%d \n",d,a,b,c);
    printf("e=   %d=(%d+%d)*%d \n",e,a,b,c);
    printf("f=   %d=(%d*%d)/%d \n",f,a,b,c);
    printf("g=   %d=%d*(%d/%d) \n",g,a,b,c);
    return 0;
}
