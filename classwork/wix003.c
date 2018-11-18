#include <stdio.h>
int main ()
{	
	int sum=0,a,i=1;
	printf ("a = ");
	scanf("%d",&a);
	while (i<=a)
	{
		sum = sum+i;
		i++;
	}
	printf ("sum=%d\n",sum);
	double r= sum/a;
	printf ("result =%lf", r);
	return 0;
}