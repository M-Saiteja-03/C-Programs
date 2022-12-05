#include<stdio.h>
int main()
{
    printf("WORKING OF INCREMENT AND DECREMENT OPERATORS \n");
    int a=10,b;
    printf("a=10 \n");
    a++;
    printf("After a++      a=%d\n",a);
    ++a;
    printf("After ++a      a=%d\n",a);
    b=a++;
    printf("after b=a++    a=%d b=%d\n",a,b);
    b=++a;
    printf("after b=++a    a=%d b=%d\n",a,b);
    a--;
    printf("After a--      a=%d\n",a);
    --a;
    printf("After --a      a=%d\n",a);
    b=a--;
    printf("after b=a--    a=%d b=%d\n",a,b);
    b=--a;
    printf("after b=--a    a=%d b=%d\n",a,b);
    return 0;
}








