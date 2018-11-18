#include <stdio.h>
int main ()
{
	int a, b;
	printf ("a = ");
	scanf("%ld",&a);
	printf ("b = ");
	scanf("%d",&b);
	
	for (int i = a; i < b; i++)
	{
		printf("|%5d | %7d |\n", i, i * i);
	}
	
	return 0;
}
