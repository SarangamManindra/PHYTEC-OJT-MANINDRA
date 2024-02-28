#include<stdio.h>
int fun(int arr[5] , int arr1[5])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i]+arr1[i];
	}
	return sum;
}
