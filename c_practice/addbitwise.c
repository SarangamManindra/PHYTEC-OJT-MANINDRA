#include<stdio.h>
int add(int a,int b);
int main()
{
	int a=5, b=7,z;
	z=addition(a,b);
	printf("%d",z);
}
int addition(int a, int b)
{
	int carry;
	while(b!=0)
	{
		carry=a&b;
		a^=b;
		b=carry<<1;
	}
	return a;
}

