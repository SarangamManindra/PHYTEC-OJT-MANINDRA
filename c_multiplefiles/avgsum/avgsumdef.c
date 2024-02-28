#include<stdio.h>
int fun1(int n,int array[15])
{
	int i,sum=0;
	float avg;
	for(i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	avg=sum/n;
	printf("%f",avg);
	return avg;
}
