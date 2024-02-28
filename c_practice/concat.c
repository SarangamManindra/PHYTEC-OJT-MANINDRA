#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	printf("enter a string: ");
	gets(s1);
	printf("enter a string: ");
	gets(s2);
	strcat(s1,s2);
	puts(s1);

}

