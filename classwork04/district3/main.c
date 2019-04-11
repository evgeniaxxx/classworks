#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];

	printf("\nInput string1: ");
	scanf("%s", str);

	int i = 0;
	while (str[i]!='\0')
	{
		if (str[i]>=97 && str[i]<=122)
			str[i]-=32;
		i++;
	}
	puts(str);
	return 0;
}
