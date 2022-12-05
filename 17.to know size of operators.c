#include<stdio.h>
int main()
{
    printf("THE NUMBER OF BYTES OCCUPIED BY:\n");
    char A='a';
    printf("char         =%d\n",sizeof(A));
    unsigned char B='b';
    printf("unsigned char=%d\n",sizeof(B));
    int C=10;
    printf("int          =%d\n",sizeof(C));
    long int D;//=200;
    printf("long int     =%d\n",sizeof(D));
    short int E=20;
    printf("short int    =%d\n",sizeof(E));
    unsigned int F=50;
    printf("unsigned int =%d\n",sizeof(F));
    float G=2.22;
    printf("float        =%d\n",sizeof(G));
    double H=3.3333;
    printf("double       =%d\n",sizeof(H));
    long double I=3.333333333;
    printf("long double  =%d\n",sizeof(I));
    return 0;

}
