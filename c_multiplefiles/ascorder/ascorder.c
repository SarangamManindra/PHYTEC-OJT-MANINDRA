#include<stdio.h>
#include"ascorder.h"
void main()
{
	int i,j,a,n, number[30];
	printf("Enter the value of N \n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&number[i]);
	fun3(number,n);
	printf("The numberts arranged in ascending order are goiven below \n");
	for(i=0;i<n;++i)
	{
		printf("%d",number[i]);
	}
}

