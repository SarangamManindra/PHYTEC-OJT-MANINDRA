#include<stdio.h>
int main()
{
	int a[]={3,6,8,8,10,12,15,15,15,20};
	int len=sizeof(a)/sizeof(int);
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len-1;j++)
		{
			if(a[i]==a[j])
				printf("%d",a[j]);
		}
	}
}
