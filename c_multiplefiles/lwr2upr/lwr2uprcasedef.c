#include<stdio.h>
int fun(input)
{
	if(input>=65 && input<=90)
	{
		printf("Given input in upper case\n");
		printf("Input in lower case is %c\n",input+32);
	}
	else if(input>=97 && input<=122)
	{
		printf("Given input in lower case\n");
		printf("Input in lower case is %c\n",input-32);
	}
}
		
