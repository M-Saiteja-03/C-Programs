#include<stdio.h>
    union test
    {
        int i;
        char c;
    }a;
int main()
{
    a.i=25;
    printf("i=%d\n",a.i);
    a.c='s';
    printf("c=%c\n",a.c);
    return 0;
}





