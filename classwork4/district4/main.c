#include <stdio.h>
int main()
{
	int arr[3][3] = {{12, 4, 67},
		             {8, 32, 34},
					 {41, 89, 52}};
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			printf("[%d][%d]=%d\t\t",i, j, arr[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
