#include<stdio.h>
int armstrong(int num);
int power(int rem,int c);
void main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	armstrong(num);
}
int armstrong(int num)
{
    int temp,rem,c=0,sum=0;
    temp=num;
   int tag=num;
    while(temp!=0)
    {
	    temp=temp/10;
	    c++;
    }
    while(tag!=0)
      {
        rem=tag%10;
	int i=1;
	int x=c;
         while(x!=0)
	 {
		 i=i*rem;
		 x--;
	 }
	sum=sum+i;
	tag=tag/10;
      }
    if(sum==num)
    {
	    printf("armstrong num\n");
    }
    else
    { 
	   printf("not armstrong\n");

}
}


