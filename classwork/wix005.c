#include <stdio.h>
int main ()
{
	long a;
	printf ("a = ");
	scanf("%ld",&a);
	int flag = 0;
	for (int i = 2;i<a;i++)
	{
		if (a%i==0)
		{ 
			flag = 1;
			break;
		}
	
	}
	if (flag == 0)
		printf ("prime\n");
	else
		printf ("not prime\n");
	return 0;
}