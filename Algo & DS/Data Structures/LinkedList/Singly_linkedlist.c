#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// node  declaration
struct node {
	int info;
	struct node *link;
}

/* Functions for LinkedLists */

//creation of node
void create(int);
struct node* create_node(int);

//display the node
void display(struct node *);

//insert the node at end
void insert_end(int);

//insert the node at beginning
void insert_begin(int);

//insert node at a position
void insert_atPos(int,int);

//delete node at begin
void delete_begin();

//delete node at position
void delete_atPos(int);

//delete node at end
void delete_end();

//search a node
void search(int);

//reverse the list
void reverse();


/* Main Program */

int main(void){

	int choice, data, choice1, pos, no_of_node;

	start = NULL;

	while(1){

		/* Create User generated Options for operations */
		system("cls");
		printf("1. Create  a LinkedList\n");
		printf("2. Display a LinkedList\n");
		printf("3. Insert into LinkedList\n");
		printf("4. Delete from LinkedList\n");
		printf("5. Search in LinkedList\n");
		printf("6. Reverse the LinkedList\n");
		printf("7. Exit");

		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice){
			
			case 1: printf("enter no of node to be created :");
					scanf("%d", &no_of_node);
					create(no_of_node);
					break;
			
			case 2: display(start);
					break;
		}



	}

}



