/***************************************************************************************/ 
/*             Name                : Linkedlist_countLength.c                          */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-20 11:53:14                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node*next;
};

/* Insert to linkedlist */
void push (struct Node**head_ref, int new_data){

    /* allocate a new node */
    struct Node*new_node = (struct Node*) malloc (sizeof(struct Node));
    new_node-> data = new_data;
    new_node -> next = (*head_ref);
    *head_ref       = new_node;
}

/* print List */
void printList (struct Node* node){
    while(node != NULL){
        printf("%d ",node->data);
        node = node->next;
    }
}


/* Count the number of nodes */
int getCount(struct Node* head){
    int count = 0; //initialise a variable for count
    struct Node * current = head; //initialise current node
    while (current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

/* Recursive method to count the number of nodes */
int getCountRecursive(struct Node*head){

    //Base case
    if(head == NULL)
    return 0;
    //count is 1 + count of remaining list
    return 1+ getCount(head->next);

}




/* Main Driver Program */
int main()
{
    //start with empty list
    struct Node * head = NULL;

    push(&head,5);
    push(&head,9);
    push(&head,4);
    push(&head,8);
    push(&head,82);
    push(&head,12);
    printf("count the number of nodes: %d ", getCount(head));
    push(&head,99);
    push(&head,6);
    push(&head,7);
    printf("\nRecursive count of the number of Nodes: %d ", getCountRecursive(head));




    return 0;
}