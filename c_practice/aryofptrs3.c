//swaping using pointers and functions
#include<stdio.h>
void swap(int *x , int *y)
{
	int temp;
	temp  = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int x ,y;
	printf("Enter two values:");
	scanf("%d%d",&x,&y);
	printf("x is %d and y is %d\n",x,y);
	swap(&x,&y);
	printf("after swapping\n");
	printf("x is %d and y is %d\n",x,y);
	return 0;
}
