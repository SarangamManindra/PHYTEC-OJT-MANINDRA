#include<stdio.h>
int main()
{
        int i , j ,r,c;
	printf("no of rows required ");
	scanf("%d",&r);
	printf("no of colums required ");
	scanf("%d",&c);
	int arr[r][c];

	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
			printf("enter %d row,%d column:",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");

}
}
