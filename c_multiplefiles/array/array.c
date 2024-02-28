#include<stdio.h>
#include"array.h"
int main()
{
	int arr[5];
	int arr1[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",fun(arr , arr1));
}


