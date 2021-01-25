#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// node  declaration
struct node {
	int data;
	struct node *next;
}*stnode;

/* Function prototypes */
//Create nodes
void createNodeList(int);

//display the node
void displayList();

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


/* Functions for LinkedLists */

//creation of node
void createNodeList(int no_of_node){
	struct node *fnNode, *tmp;
	int num, i;
	stnode = (struct node*)malloc(sizeof(struct node));

	if(stnode == NULL){
		printf("Memory cannot be allocated");
	}
	else{
		/* Reads through keyboard input */
		printf("Input the data for Node 1:");
		scanf("%d",&num);
		stnode->data=num;
		stnode->next=NULL;
		tmp=stnode;

		/* creating nodes further & adding to linked list */
		for(i=2;i<=no_of_node;i++){
			fnNode = (struct node*)malloc(sizeof(struct node));
			if(fnNode == NULL){
				printf("Memory cannot be allocated");
				break;
			}
			else{
				printf("Input the data for node %d :",i);
				scanf("%d",&num);

				fnNode->data = num;
				fnNode->next = NULL;

				tmp->next = fnNode;
				tmp = tmp->next;
			}
		}
	}
}

//display linkedLists
void displayList(){
	struct node *tmp;
	if( stnode == NULL){
		printf("the list is empty");
	}
	else{
		tmp=stnode;
		while(tmp!=NULL){
			printf("Data : %d\n",tmp->data);
			tmp=tmp->next;
		}
	}

}



/* Main Program */

int main(void){

	int choice,no_of_node;



	while(1){

		/* Create User generated Options for operations */
		// system("cls");

		printf("1. Create  a LinkedList\n");
		printf("2. Display a LinkedList\n");
		printf("3. Insert at begining in LinkedList\n");
		printf("4. Insert at particular postion in LinkedList\n");
		printf("5. Insert at end in LinkedList\n");
		printf("6. Delete at begining in LinkedList\n");
		printf("7. Delete at particular postion in LinkedList\n");
		printf("8. Delete at end in LinkedList\n");
		printf("9. Search in LinkedList\n");
		printf("10.Reverse the LinkedList\n");
		printf("11. Exit");

		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice){
			
			case 1: printf("enter no of node to be created :");
					scanf("%d", &no_of_node);
					createNodeList(no_of_node);
					break;
			
			case 2: displayList();
					break;

			case 3: insertAtBegining(struct node **head_ref, int data);
		}



	}

}



