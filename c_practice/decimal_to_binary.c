//This code works only when decimal should be in i/p or o/p

#include<stdio.h>
int main()
{
        int place=1;
        int result=0;
        int num,rem;
        printf("enter decimal  number: ");
        scanf("%d",&num);
        while(num)
        {
                rem=num%2;     // output number
                result=result+rem*place;
                place=place*10;   //input number
                num=num/2;     //output number
        }
        printf("The binary  number is:%d ",result);
}

  
