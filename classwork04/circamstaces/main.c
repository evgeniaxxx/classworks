#include <stdio.h>
int main()
{
	char str[100];
	printf("\nYour name: ");
	gets(str);
	printf("\nHello, %s!", str);
	return  0;
}
