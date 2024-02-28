#include<stdio.h>
int main()
{
	int n,ctr;
	printf("enter a input digit : ");
	scanf("%d",&n);
	ctr = noofdigits(n);
	printf("number of digits in number is : %d \n\n",ctr);
	return 0;
}
