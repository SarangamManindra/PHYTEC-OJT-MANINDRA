#include<stdio.h>
int main()
{
	int i, num,count=0;
	printf("enter the number: ");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==0)
		printf("is prime number",num);
	else
		printf("is not prime number",num);
}
