#include<stdio.h>
int main()
{

	int arr[]={1,2,3,2,4,3,1};
	int length=sizeof (arr)/sizeof (arr[0]);
	for(int i=0;i<length;i++)
	{
		for(int j=i+1;j<length;j++)
		{
			if(arr[i]==arr[j])
				printf("%d\n",arr[j]);
		}
	}
	return 0;
}
