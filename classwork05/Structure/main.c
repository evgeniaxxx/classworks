#include <stdio.h>

typedef struct student
{
	int id;
	char name[50];
	struct DOB
	{
		int date;
		int month;
		int year;
	} dob;
} Student;

int main()
{
	Student std;
	printf("\n id = ");
	scanf("%d",&std.id);
	printf("\n name = ");
	scanf("%s",&std.name);
	printf("\n DOB = ");
	scanf("%d %d %d", &std.dob.date, &std.dob.month, &std.dob.year);

	printf("\n==== Student info ====");
	printf("\n ID = %d", std.id);
	printf("\n name = %s", std.name);
	printf("\n DOB = %d.%.2d.%d\n", std.dob.date, std.dob.month, std.dob.year);
	return 0;
}

