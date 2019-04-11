#include <stdio.h>

typedef struct Point1
{
	int x;
	int y;
}Point1;

typedef union Point2
{
	int x;
	int y;
}Point2;

int main(int argc, char *argv[])
{
    Point1 p1 = {2, 3};
	Point2 p2;
	p2.x = 4;
	p2.y = 5;
	printf("\n(%d, %d)\n", p1.x, p1.y);
	printf("\n(%d, %d)\n", p2.x, p2.y);
    return 0;
}

