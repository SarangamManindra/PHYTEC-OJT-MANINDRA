#include<stdio.h>
void demo_signed_unsigned()
{
	unsigned int num=115;
	unsigned int bitmask=1<<6;
	unsigned int res;
	res=num&bitmask;
	if(res == 0)
		printf("bit %d is OFF\n",res);
	else
		printf("bit %d is OFF\n",res);
}
