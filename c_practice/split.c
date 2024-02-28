#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the name::");
	gets(str);
	char *token=strtok(str," ");
	while(token!=NULL)
	{
		printf("%s",token);
		token = strtok(NULL," ");
		if(token!=Null)
		{
			printf(",");
		}
	}
	return 0;
}
