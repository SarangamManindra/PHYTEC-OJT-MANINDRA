#include<stdio.h>
int main()
{
	int a,b,c,d,sum,avg;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter a number:");
	scanf("%d",&b);
	printf("enter a number:");
	scanf("%d",&c);
	printf("enter a number:");
	scanf("%d",&d);
	sum=a+b+c+d;
	avg=sum/4;
	printf("%d is the average of 4 numbers",avg);
}
