#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("\nInput string: ");
	scanf("%s",str);
	int i = 0;
	for(i = 0; i<100; i++)
	{
		if (str[i] == '\0')
			break;
	}
	printf("Length = %d\n", i);
	printf("Length = %d\n", strlen(str));
	return 0;
}
