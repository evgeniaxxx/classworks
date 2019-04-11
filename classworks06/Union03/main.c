#include <stdio.h>

unsigned long fact(int n)
{
	unsigned long p = 1;
	for(int  i = 1; i <= n; i++)
	{
		p = p * i;
	}
	return(p);
}

unsigned long fact2(int NNNNNN)
{
	if (NNNNNN > 1)
		return fact2(NNNNNN-1)*NNNNNN;
	else
		return 1;
}

int main(int argc, char *argv[])
{
	int n;
    printf("Enter a number ");
	scanf("%d",&n);

	printf("%ld\n", fact2(n));
    return 0;
}

