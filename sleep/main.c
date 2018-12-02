#include <stdio.h>

int sum2(int* massive, int size)
{
	int s = 0;
	for (int u = 0; u < size; u++)
	{
		if (massive[u]%2 ==0)
			s+= massive[u];
	}
	return s;
}

int main()
{
	int a;
	printf("Enter the number of elements in the array = ");
	scanf("%d", &a);
	int arr[a];
	for (int u = 0; u < a; u++)
	{
		printf ("a[%d] = ", u);
		scanf("%d", &arr[u]);
	}
	printf("sum = %d\n", sum2(arr, a));
	return 0;
}
