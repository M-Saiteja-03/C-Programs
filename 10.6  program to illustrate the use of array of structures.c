#include<stdio.h>
    struct test1
    {
        char names[39];
        int marks;
        float percentage;
    }arr[3];
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter name,marks and percentage of student %d\n",i+1);
        scanf("%s%d%f",arr[i].names,&arr[i].marks,&arr[i].percentage);
        printf(" name=%s\n marks=%d\n percentage=%f\n",arr[i].names,arr[i].marks,arr[i].percentage);
    }
}





