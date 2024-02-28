#include<stdio.h>
void display(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("the elements in %d are %d\n",i,a[i]);
}
int main()
{
	int a[5]={33,44,55,66,77};
	display(a,5);
}

