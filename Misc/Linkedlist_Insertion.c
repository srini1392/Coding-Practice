/***************************************************************************************/ 
/*             Name                : Linkedlist_Insertion.c                            */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-14 16:36:42                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

/* Note:
*  A new node in a linked list can be added in three ways:
*  a) at the front of the linked list
*  b) after a given node
*  c) at the end of the linked list
*/


/* Scenario 1 --->
* Adding node at the beggining, the new node will become head and replaces the earlier node (4 step process)
*/
void push(struct Node **head_ref, int new_data){

    //allocate the new node 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    //put the new data into it
    new_node->data = new_data;

    //make the new node as the head
    new_node->next = (*head_ref);

    //move the head to point the new node
    (*head_ref) = new_node;
}



/* Scenario 2 --->
* Adding node after a given node (5 step process)
*/
void insertAfter(struct Node* prev_node, int new_data){

    //check if the prev_node is NULL
    if (prev_node == NULL){
        printf("the given node cannot be NULL");
        return;
    }

    //allocate a new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    //put the new data into it
    new_node->data = new_data;

    //make the next of new node as next of previous node
    new_node->next = prev_node->next;

    //make the next of prev_node as new_node
    prev_node->next = new_node;

}



/* Scenario 3 --->
* Adding node at the end (6 step process)
* Since a Linked List is typically represented by the head of it, 
* we have to traverse the list till end and then change the next of last node to new node.
*/
void appendAtLast(struct Node** head_ref, int new_data){

    //allocate a new node
    struct Node* new_node =(struct Node*) malloc (sizeof(struct Node));
    struct Node* last     = *head_ref; //temp node to traverse the list

    //put data into the new node
    new_node->data = new_data;

    //this is going to be last node, hence make the new node next as NULL
    new_node->next = NULL;

    //check if the linked list is empty, if so make the node as head
    if (*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    //else traverse through the list till last node
    while (last->next!= NULL){
        last = last->next;
    }

    //change the next of the last node
    last->next = new_node;
    return;

}



/*General print function to traverse the list elements*/
void fun1(struct Node *n){
    while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
    printf("\n"); //newline
}


/* Main driver program */
int main(){

    /* start with empty list */
    struct Node*head = NULL;

    //insert 6, so linked list becomes 6->NULL
    appendAtLast(&head,6);

    //insert 7, at beginning so LL becomes 7->6->NULL
    push(&head,7);

    //insert 1, at beginning so LL becomes 1->7->6->NULL
    push(&head,1);

    //insert 4 at end, so LL becomes 1->7->6->4->NULL
    appendAtLast(&head,4);

    //insert 8, after 7 hence LL becomes 1->7->8->6->4->NULL
    insertAfter(head->next,8);

    printf("\n Created Linked list is: ");
    fun1(head);

    return 0;
}