#include <stdio.h>

typedef struct Node
{
	int data;
	float value;
	struct Node* next;         
} Node;

Node* start = NULL;
Node* CreateList(Node*);
Node* DeleteList(Node*);
//Node* DeleteBeg(Node*);
void DisplayList(Node*);

int main(int argc, char *argv[])
{
	start = CreateList(start);
	DisplayList(start);
    return 0;
}

Node* CreateList(Node* start)
{
	for(int i = 0; i<100; i++)
	{
		Node* newNode = (Node*)malloc(sizeof(Node));
		newNode->data = i*i;
		newNode->value = 100.0;
		newNode->next = NULL;

		if(start == NULL)
			start = newNode;
		else
		{
			Node* ptr = start;
			while(ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = newNode;
		}
	}
	return start;
}

void DisplayList(Node* start)
{
	Node* ptr = start;
	while(ptr != NULL)
	{
		printf("%d ", ptr->data + (int)ptr->value);
		ptr = ptr->next;
	}
}

Node* DeleteList(Node*start)
{
	while(start != NULL)
	{
		Node* ptr = start->next;
		free(start);      
		start = ptr;
	}
}
