#include<stdio.h>
int mer_array(int a[],int b[],int a_size,int b_size)
{
	int c_size =a_size + b_size;
	int i,j,k;
	int c[c_size];
	for(i=0;i<a_size;i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=a_size;i<b_size && j<c_size;i++,j++)
	{
		c[j]=b[i];
	}
	for(k=0;k<c_size;k++)
	{
		printf("%d",c[k]);
	}

}
int main()
{
	int a_size = 6,b_size = 5;
	int a[6]={1,2,3,4,5,6};
	int b[5]={7,8,9,10,11};
	printf("%d",mer_array(a,b,a_size,b_size));
	return 0;
}
