#include <stdio.h>
int main() 
{
	int a,b;
	printf("a = ");
	scanf("%d",&a);
	int arr[a];
	for (int i = 0;i<a;i++)
	{
		scanf("%d",&arr[a]);
	}
	int sum  = 0;
	for (int i = 0;i<a;i++)
	{
		sum+=arr[a]*arr[i];
	}
	printf ("a = %d", sum);
	return 0;
}
