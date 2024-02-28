#include<stdio.h>
void case_converter_demo()
{
	char input_char;
	printf("Enter a character: ");
	scanf("%c",&input_char);
	if(input_char >=65 && input_char <=90)
	{
		printf("Given character is in upper case: \n");
		printf("character in lower case : %c\n",input_char+32);
	}
	else if(input_char >=97 && input_char <= 122)
	{
		printf("Given character is in lower case: \n");
		printf("character in upper case : %c\n",input_char-32);
	}
	else
	{	
		printf("Given character is in special character :\n");
		printf("special character : %c\n",input_char);
	}
}
int main()
{
	case_converter_demo();
}
