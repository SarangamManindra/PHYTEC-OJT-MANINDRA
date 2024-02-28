#include<stdio.h>
int main()
{
	int arr[100];
	int max=0,n,min=0,mid=0;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
			min=arr[i];
		if(max<arr[i])
			max=arr[i];
		if((mid<arr[i])&&(mid>max))
		{
			mid=arr[i];}
	}
	printf("min=%dmax=%d\nmid=%d\n",min,max,mid);
}


