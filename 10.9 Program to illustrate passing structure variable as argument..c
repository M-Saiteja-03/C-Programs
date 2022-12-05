#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rollno;
    int marks;
};
void stdnt(struct student);
int main()
{
    struct student stu={"Saiteja",167,100};
    stdnt(stu);
    return 0;
}
void stdnt(struct student stu1)
{
    printf("name:%s\n",stu1.name);
    printf("rollno:%d\n",stu1.rollno);
    printf("marks:%d\n",stu1.marks);
}
