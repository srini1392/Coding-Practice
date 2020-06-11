/***************************************************************************************/ 
/*             Name                : Linkedlist_deletion.c                             */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-15 14:08:32                               */
/***************************************************************************************/

/* Note: 
*   We need to perform 3steps to delete a node:
*   a) Find the previous node to be deleted
*   b) Change the next of previous node
*   c) Free memory for the node to be deleted
*/

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};



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


/* Given a reference (pointer to pointer) to the head of a list 
   and a key, deletes the first occurrence of key in linked list */
void deleteNode(struct Node** head_ref, int key){

    //store the head node
    struct Node*temp = *head_ref, *prev;

    //if head node itself is the key to be deleted
    if(temp != NULL && temp->data == key){
        *head_ref = temp->next;  //changing the head
        free(temp);             //free old head
        return;
    }

    //search for the key to be deleted, keep track of the previous node
    while(temp!= NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    //if the key was not present in linkedlist
    if (temp == NULL)
    return;

    //unlink the node from linkedlist
    prev->next = temp->next;

    free(temp);
    
}