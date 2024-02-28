#include<stdio.h>
int main()
{
	char s1[10],s2[10];
	printf("enter a string s1: ");
	gets(s1);
	printf("enter a string s2: ");
	gets(s2);
	int count=0;
	for(int i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
		count++;
		break;
		}
	}
	if(count==1)
	{
		printf("%s ,%s strings are not same\n",s1,s2);
	}
	else
	{
		printf("%s ,%s the string is same\n",s1,s2);
	}
}

