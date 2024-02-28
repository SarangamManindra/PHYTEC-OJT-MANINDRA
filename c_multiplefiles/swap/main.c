#include<stdio.h>
#include"header.h"
int main()
{
	int a,b,c;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter a value:");
	scanf("%d",&b);
	printf("before swap value of a is %d\n",a);
	printf("before swap value of b is %d\n",b);
	fun1(a,b);
}

