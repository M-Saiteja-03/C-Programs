#include<stdio.h>
struct outer
{
	int o1;
	float o2;
	struct inner
	{
		int i1;
		float i2;
	}in;
}out;
int main()
{
	out.o1=2;
	out.o2=4.5;
	out.in.i1=2*out.o1;
	out.in.i2=4*out.o2;
	printf("o1=%d\n o2=%f\n i1=%d\n i2=%f\n",out.o1,out.o2,out.in.i1,out.in.i2);
}

