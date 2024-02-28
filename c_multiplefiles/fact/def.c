#include<stdio.h>
void fun1(int num)
{
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",num,fact);
}
