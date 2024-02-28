#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter a number:");
	scanf("%d",&b);
	printf("enter a number:");
	scanf("%d",&c);
	if(a>=b&&a>=c)
	{
		printf("%d is greater",a);
	}
	if(b>=a&&b>=c)
	{
		printf("%d is greater",b);
	}
	if(c>=a&&c>=b)
	{
		printf("%d is greater",c);
	}
}

