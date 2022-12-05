#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the two numbers to evaluate the relational operators \n");
    scanf("%d %d",&a,&b);
    c=a<b;
    printf("less than:                (%d<%d)=%d \n",a,b,c);
    c=a<=b;
    printf("less than or equal to:    (%d<=%d)=%d \n",a,b,c);
    c=a>b;
    printf("greater than:             (%d>%d)=%d \n",a,b,c);
    c=a>=b;
    printf("greater than or equal to: (%d>=%d)=%d \n",a,b,c);
    c=a==b;
    printf("equal to:                 (%d==%d)=%d \n",a,b,c);
    c=a!=b;
    printf("not equal to:             (%d!=%d)=%d \n",a,b,c);
    return 0;

}
