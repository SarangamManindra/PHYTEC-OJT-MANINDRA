#include<stdio.h>
int main()
{
	int b=10;
	int *p;
	p=&b;
	printf("%d %d %p",b,*p,&b);
	//printf("%d\n",*p);
	//printf("%x\n",&b);
}
