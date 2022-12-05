#include<stdio.h>
struct test1
{
    int i;
    char ch;
    float fl;
}a;
union test2
{
    int  p;
    char q;
    float r;
}b;
int main()
{
    struct test1 a={10,'S',3.414};
    union test2 b={20,'M',5.15};
    printf("a.i=%d\na.ch=%c\na.fl=%f\n",a.i,a.ch,a.fl);
    printf("b.p=%d\nb.q=%c\nb.r=%f\n",b.p,b.q,b.r);
    b.q='M';
    printf("b.p=%d\nb.q=%c\nb.r=%f\n",b.p,b.q,b.r);
    b.r=5.15;
    printf("b.p=%d\nb.q=%c\nb.r=%f\n",b.p,b.q,b.r);
}
