#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[]={"manindra sarangam"};
	//len=strlen(&a[0:]);
	//printf("length is =%d\n",len);
	for(i=0;a[i]!='\0';i++);
		printf("size of string = %d\n",i);
}

