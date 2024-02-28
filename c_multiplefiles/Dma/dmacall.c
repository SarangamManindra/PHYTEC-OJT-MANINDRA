#include<stdio.h>
int maximum(int *ptr,int size)
{
	int i;
	for (i=0;i<size;i++)
	{
		scanf("%d",(ptr+i));
	}
	int max;
	max=*ptr;
	for (i+1;i<size;i++)
	{
		if (*(ptr+i)>max)
		{
			max=*(ptr+i);
		}
	}
	printf("The maximum value in an array is::%d\n",max);
}
