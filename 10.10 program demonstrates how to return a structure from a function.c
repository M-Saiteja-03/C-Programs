#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rollno;
    int marks;
};
void stdnt1(struct student);
struct student stdnt2();
int main()
{
    struct student stu2,stu1={"Saiteja",167,100};
    stdnt1(stu1);
    printf("\n");
    stu2=stdnt2();
    //printf("name:%s\nrollno:%d\nmarks:%d\n",stu2.name,stu2.rollno,stu2.marks);
    stdnt1(stu2);
    return 0;
}
void stdnt1(struct student stu)
{
    printf("name:%s\n",stu.name);
    printf("rollno:%d\n",stu.rollno);
    printf("marks:%d\n",stu.marks);
}
struct student stdnt2()
{
    struct student stud={"harry",192,95};
    return stud;
}

