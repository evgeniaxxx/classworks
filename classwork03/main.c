#include <stdio.h>

int main()
{
	size_t char_size = sizeof(char);
	size_t short_size = sizeof(short);
	size_t int_size = sizeof(int);
	size_t long_size = sizeof(long);
	size_t float_size = sizeof(float);
	size_t double_size = sizeof(double);
	printf ("\n Size char = %zu", sizeof(char));
	printf ("\n Size short = %zu", sizeof(short));
	printf ("\n Size int = %zu", sizeof(int));
	printf ("\n Size long = %zu", sizeof(long));
	printf ("\n Size float = %zu", sizeof(float));
	printf ("\n Size double = %zu", sizeof(double));
	
	printf ("\n Size pointer = %zu", sizeof(void*));
	
	return 0;
}
