#include <stdio.h>
#include <stdlib.h>
#define MAX_ROWS 100
#define MAX_COLS 100

int main(int argc, char *argv[])
{ 
	int** arr = (int**)calloc(MAX_ROWS, sizeof(int*));
	for(int i = 0; i < MAX_ROWS; i++ )
	{
		arr[i] = (int*)calloc(MAX_COLS, sizeof(int));
	}

	for(int i = 0; i < MAX_ROWS; i++)
	{
		free(arr[i]);
	}

	free(arr);
    return 0;
}

