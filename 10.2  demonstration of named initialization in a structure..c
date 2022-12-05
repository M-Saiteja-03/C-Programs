#include<stdio.h>
struct test
{
	float x,y,z;
}s;
int main()
{
	float p,q,r;
	s.x=23.17;
	s.y=5.94;
	s.z=19.45;
	p=s.x+s.y+s.z;
	q=s.z*s.x;
	r=s.z/s.x;
	printf("p=%f\n",p);
	printf("q=%f\n",q);
	printf("r=%f\n",r);
}

