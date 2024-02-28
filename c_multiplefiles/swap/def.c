#include<stdio.h>
int fun1(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("after swaping a value is:%d\n",a);
	printf("after swaping b value is:%d\n",b);
}

