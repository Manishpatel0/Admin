#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void travalios(struct Node *ptr){
	while(ptr != NULL){
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf(" ");
}

struct Node *insetFirst(struct Node *head, int value){
		struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
		ptr->data = value;
		ptr->next = head;
		head = ptr;
		return head;
}

int main(){
	 struct Node *head = (struct Node*) malloc(sizeof(struct Node));
	 struct Node *second = (struct Node*) malloc(sizeof(struct Node));
	 struct Node *third = (struct Node*) malloc(sizeof(struct Node));
	 struct Node *four = (struct Node*) malloc(sizeof(struct Node));

	 head->data = 7;
	 head->next = second;

	 second->data = 11;
	 second->next = third;

	 third->data = 32;
	 third->next = four;

	 four->data = 18;
	 four->next = NULL;
	 printf("Linked list data\n");
	 travalios(head);

	 printf("\nLinked list insetFirst\n");
	 head = insetFirst(head ,5);
	 travalios(head);

	 printf("\nLinked list inset b/w\n");
	 struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	 ptr->data = 55;
	 ptr->next = second->next;
	 second->next = ptr;
	 travalios(head);

	 
	return 0;
}