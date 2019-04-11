#include <stdio.h>
#include <stdint.h>
#define MAX 50


int main(int argc, char *argv[])
{
   int64_t a[MAX];
	for (int i = 0; i < MAX; i++)
		a[i] = 20000 + i;
	FILE* fptr = fopen("C:\\Windows\\test.dat", "wb");
	if (fptr == NULL)
	{
		puts("Error opening file ?");
		return -1;
	}
	puts("File was opened successfully ");
	int m = fwrite(a, sizeof(int64_t), MAX, fptr);
	if (m == MAX)
		puts("Data was wtitten successfully ");
    return 0;
	int res = fclose(fptr);
	if (res == -1)
	{
		puts("File-closing error!");
		return -2;
	}
	return 0; 
}
//test.dat - название файла
