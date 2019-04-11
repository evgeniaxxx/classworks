#include <stdio.h>
typedef struct student 
{
	union
	{
		int id;
		char name[20];
	};
	int mark;
}Student;


int main(int argc, char *argv[])
{
    Student std;
	char answer;
	printf("\nDo want to enter id? (y/n): ");
	gets(&answer);
	if (answer == 'y' || answer == 'Y')
	{
		printf("\nEnter id ");
		scanf("%d",&std.id);
	}
	else 
	{
		printf("\nEnter name: ");
		scanf("%s",&std.name);
	}
	printf("\nEnter a mark:\n ");
	scanf("%d",&std.mark);
	if (answer == 'y' || answer == 'Y')
	{
		printf("ID:%d \n", std.id);
	}
	else
	{
		printf("Name:%s \n", std.name);
	}
	printf("Mark: %d", std.mark);	
    return 0;
}

