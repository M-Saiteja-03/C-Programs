#include<stdio.h>
int main()
{
    enum {mon,tue,wed,thur,fri,sat,sun};
    enum days start,end;
    start=mon;
    end=sun;
    printf("mon=%d tue=%d wed=%d thur=%d fri=%d sat=%d sun=%d",mon,tue,wed,thur,fri,sat,sun);
    printf("\n");
    printf("start=%d end=%d",start,end);
}
