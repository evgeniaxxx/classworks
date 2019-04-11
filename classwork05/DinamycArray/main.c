#include <stdio.h>

#define MAX_SIZE 1000

int main(int argc, char *argv[])
{
    int* data = (int*)malloc(sizeof(int)*MAX_SIZE);
	if (data == NULL)
	{
		printf("Memory allocation error!\n ");
		return -1;
	}
	for(int i = 0; i < MAX_SIZE; i++)
	{
		data[i] = i;
	}

	for(int i = 0; i < MAX_SIZE; i++)
	{
		printf("%d ", data[i]);
	}


	free(data);
    return 0;
}

