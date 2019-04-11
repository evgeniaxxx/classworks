#include <stdio.h>
int main ()
{
	int sum  = 0;
	int a,b;
	printf ("a = ");
	scanf ("%d",&a);
	printf ("b = ");
	scanf ("%d",&b);
	int i = a;
	while (i<=b)
	{
		if (i%2 == 0)
		{
			i++;
			continue;
		}
		else
			printf ("%d\n", i);
		i++;
	}
	return 0;
}
