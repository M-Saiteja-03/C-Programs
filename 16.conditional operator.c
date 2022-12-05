#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("enter two numbers to find largest among them\n");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d \n",a,b);
    c=(a>b)?a:b;
    printf("largest=%d \n",c);
    printf("enter a number to check whether it is odd or even\n");
    scanf("%d",&n);
    (n%2)?printf("odd"):printf("even");
    return 0;
}
