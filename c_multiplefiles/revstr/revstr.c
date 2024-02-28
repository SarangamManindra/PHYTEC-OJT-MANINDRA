#include<stdio.h>
int main()
{
	char a[20]="c programming";
	char *ptr;
	ptr=a;
	myrevstr(ptr);
	//for(int i=0;*(ptr+i);i++)
	printf("%s",ptr);
	printf("\n");
	return 0;
}
