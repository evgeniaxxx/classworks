#include <stdio.h>
int main ()
{	int a,b;
	printf ("a = ");
	scanf("%d",&a);
	printf ("b = ");
	scanf("%d",&b);
	for (int i=a;i<=b;i++)
	{
		printf ("%d\n", i);
	}
	return 0;

}