#include<stdio.h>
int main()
{
	int n,i,a[30];
        printf("enter the range: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("enter the array element %d: ",i+1);
                scanf("%d",&a[i]);
        }
	printf("the array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

