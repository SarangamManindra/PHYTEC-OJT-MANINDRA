#include<stdio.h>
int main()
{
	int i,j,k,n,c;
	printf("enter the rows: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("  ");
		}
		for(k=0;k<=i;k++)
		{
			if(i==0||k==0)
				c=1;
			else
				c=c*(i-k+1)/k;
			printf("%4d",c);
		}
		printf("\n");
	}
}
