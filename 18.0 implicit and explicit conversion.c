#include<stdio.h>
int main()
   {
    int a,b,c;
    float d;
    printf("IMPLICIT CONVERSION\n");
    printf("enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    d=(a+b+c)/3;
    printf("OUTPUT of implicit conversion:\n");
    printf("average of numbers=%f\n",d);

    printf("EXPLICIT CONVERSION\n");
    printf("enter above three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    d=(float)(a+b+c)/3;
    printf("OUTPUT of explicit conversion: \n");
    printf("average of numbers=%f\n",d);
    return 0;

   }
