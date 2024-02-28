#include<stdio.h>
#include"avgsum.h"
int main()

{
	int i,n,array[15];
	printf("enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number %d: ",i+1);
		scanf("%d",array[i]);
	}
	float p;
	p=fun1(n,array);
	printf("average is %f",p);
}
			
