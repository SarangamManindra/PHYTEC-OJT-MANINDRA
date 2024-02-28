#include<stdio.h>
int main()
{
	int a,i;
	printf("table required: ");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	printf("\n%d*%d=%d",a,i,(a*i));
	return 0;
}
