#include<stdio.h>
void printBinary(unsigned int num)
{
	unsigned int bitmask;
	unsigned int res;
	int i=31;
	while(i>=0)
	{
		bitmask=1<<i;
		res=num&bitmask;
		if(res == 0)
			printf("0");
		else
			printf("1");
		i--;
	}
	printf("\n");
}
int main()
{
	unsigned int num=115;
	printBinary(num);
}


