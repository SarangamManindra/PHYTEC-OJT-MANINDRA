#include<stdio.h>
int main()
{
	int i;
	int num1=99;
	int num2=88;
	int num3=66;
	int num4=35;
	int num5=75;
	int num6=23;
	int *ptr[6]={&num1,&num2,&num3,&num4,&num5,&num6};
	printf("size of ptr=%lu\n",sizeof(ptr));
	for(i=5;i>=0;i--)
	{
		printf("%d\n",*ptr[i]);
	}
}
