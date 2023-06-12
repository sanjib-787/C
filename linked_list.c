#include<stdio.h>
#include<stdlib.h>
struct node{
	int rollNo;
	char name[10];
	int mark;
	struct node *next;
};
struct node printAll( struct node *head)
{
	while(head != NULL) {
		printf("%d\t",head -> rollNo);
		printf("%s\t",head -> name);
		printf("%d\t",head -> mark);
		printf("\n");
		head = head -> next;
	}
	printf("\n");
}
struct node *create_ll(struct node *head, int size) 
{
	struct node *temp = NULL;
	struct node *new_node = NULL;
	for(int i = 0; i < size; i++){
		new_node = (struct node *)malloc( sizeof(struct node));
		printf("enter data for linked list:\n");
		printf("enter data for rollNo:\n");
		scanf("%d",&new_node -> rollNo);
		printf("enter data for name:\n");
		scanf("%s",new_node -> name);
		printf("enter data for mark:\n");
		scanf("%d",&new_node -> mark);
		new_node -> next = NULL;
		if( head == NULL ) {
			head = new_node;
			temp = new_node;
		} else {
			temp -> next = new_node;
			temp = new_node;
		}
	}
	return head;
}
struct node *search_item(struct node *head)
{
	struct node *temp = NULL;
	char str1[10], str2[10];
	int roll, index=0;
	printf("enter a roll to find\n");
	scanf("%d", &roll);
	temp = head;
	while( temp -> next != NULL) {
		temp = temp -> next;
		index++;
		if(temp -> rollNo == roll) {
			printf("roll no is available in %d\n",index);
		} else {
			printf("roll no is not available in linked list.\n");
		}
	}
	return 0;
}
struct node *delete_duplicate(struct node *head)
{
	struct node *temp = NULL;
	struct node *temp1 = NULL;
	struct node *temp2 = NULL;
	temp = head;
	temp1 = head;
	int count = 0;
	while( temp1 -> next != NULL) {
		temp2 = temp1;
		temp1 = temp1 -> next;
		if( temp1 -> rollNo == temp2 -> rollNo ) {
			count++;
			temp = temp1;
			temp2 -> next = temp1 -> next;
			free(temp);
		}
	}
	printf("%p\n",temp2 -> next);
	if( count > 2){
		delete_duplicate(temp2 -> next);
	}
	return head;
}
/*struct node *delete_position( struct node *head,int pos)
{
	struct node *temp = NULL;
	struct node *temp1 = NULL;
	int i = 1;
	temp = head;
	if ( head == NULL ){
		printf("list is empty\n");
	} else {
		while( i < pos ) {
			temp = temp -> next;
			i++;
		}
		temp1 = temp -> next;
		temp -> next = temp1 -> next;
		free( temp1 );
	}
	return head;
}
struct node *delete_all_duplicate(struct node *head)
{
	struct node *temp = NULL;
	struct node *temp1 = NULL;
	struct node *temp2 = NULL;
	temp = head;
	temp1 = head;
	int count = 0, roll,pos;
	while(temp -> next != NULL) {
		roll = temp -> rollNo;
		pos = 0;
		count =0;
		temp1 = head;
		while(temp1 != NULL) {
			if( temp1 -> rollNo == roll){
				count++;
				if (count > 1){
					head = delete_position(head,pos);
				}
			}
			pos++;
			temp1 = temp1->next;
		}
		temp = temp -> next;
	}
	return head;
}*/
int main(void)
{
	int size;
	struct node *head = NULL;
	printf("enter the size :\n");
	scanf("%d", &size);
	head = create_ll( head, size );
	search_item(head);
	head = delete_duplicate( head );
	//head = delete_all_duplicate( head );
	printAll( head );
}
