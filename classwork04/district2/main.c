#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100], str2[100];

	printf("\nInput string1: ");
	scanf("%s", str1);
	printf("\nInput string2: ");
	scanf("%s", str2);

	int len1 = strlen(str1);
	for (int i = 0; i<100; i++)
	{
		str1[len1+i] = str2[i];
		if ( str2[i] == '\0')
			break; 
	}
	printf("The whole string = %s\n", str1);
	printf("The whole string = %s\n", strcat(str1, str2));
	return 0;
} 
