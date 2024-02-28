#include<stdio.h>
int main()
{
    int a,b,*ptr1,*ptr2;
    printf("enter the value: ");
    scanf("%d",&a);
    printf("enter the value: ");
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    if(*ptr1>*ptr2)
    {
	    printf("%d is greater",*ptr1);
    }
    else
    {
	    printf("%d is greater",*ptr2);
    }
}
    
