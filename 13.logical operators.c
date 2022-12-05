#include<stdio.h>
int main()
{
    int a=5,b=6,c=7,d;
    printf("working of 'LOGICAL AND' (&&) \n");
    d=(a<b)&&(b<c);
    printf("%d=(%d<%d)&&(%d<%d)\n",d,a,b,b,c);
    d=(a<b)&&(b>c);
    printf("%d=(%d<%d)&&(%d>%d)\n",d,a,b,b,c);
    d=(a>b)&&(b<c);
    printf("%d=(%d>%d)&&(%d<%d)\n",d,a,b,b,c);
    d=(a>b)&&(b>c);
    printf("%d=(%d>%d)&&(%d>%d)\n",d,a,b,b,c);

    printf("working of 'LOGICAL OR' (||) \n");
    d=(a<b)||(b<c);
    printf("%d=(%d<%d)||(%d<%d)\n",d,a,b,b,c);
    d=(a<b)||(b>c);
    printf("%d=(%d<%d)||(%d>%d)\n",d,a,b,b,c);
    d=(a>b)||(b<c);
    printf("%d=(%d>%d)||(%d<%d)\n",d,a,b,b,c);
    d=(a>b)||(b>c);
    printf("%d=(%d>%d)||(%d>%d)\n",d,a,b,b,c);

    printf("working of 'LOGICAL NOT' (!) \n");
    d=!(a>b);
    printf("!(%d>%d)=%d\n",a,b,d);
    d=!(a<b);
    printf("%!(%d<%d)=%d\n",a,b,d);

    return 0;


}
