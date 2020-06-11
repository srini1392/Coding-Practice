/***************************************************************************************/ 
/*             Name                : Linkedlist_deleteAtPosition.c                     */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-15 23:16:48                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//given a linkedlist and a position, deleteing the linked list node at that position

/* 
Input: position = 1, Linked List = 8->2->3->1->7
Output: Linked List =  8->3->1->7

Input: position = 0, Linked List = 8->2->3->1->7
Output: Linked List = 2->3->1->7 
*/

//A linkedList Node
struct Node{
    int data;
    struct Node *next;
};

//inserting data, creation of new node
void push(struct Node**head_ref, int new_data){

    struct Node*new_node = (struct Node*) malloc (sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}


/* Given a reference to the head fo node, and a position. 
   Deletes the node at given position */
void deleteNode(struct Node**head_ref, int position){

    //if linkedlist is empty
    if (*head_ref == NULL)
        return;

    //store the head node
    struct Node*temp = *head_ref;

    //if head needs to be removed
    if (position == 0){
        *head_ref = temp->next; //change the head
        free(temp);
        return;
    }

    //find the previous node of the node to be deleted
    for(int i=0; temp!=NULL && i<position-1 ;i++){
        temp = temp->next;
    }

    //if position is more than the number of nodes
    if (temp == NULL || temp->next == NULL){
        return;
    }

    //Node temp->next is the node to be deleted
    //store the pointer to next node to be deleted
    struct Node* next = temp->next->next;

    //unlink the node
    free(temp->next);

    temp->next = next; // unlink node from linkedlist
    
}


/* Printing the LinkedLIst */
void PrintList(struct Node* node){
    while(node != NULL){
        printf("%d ",node->data);
        node = node->next;
    }
}

/* Main driver program */
int main(){

    //start with empty list
    struct Node*head = NULL;
    
    push(&head,7);
    push(&head,1);
    push(&head,3);
    push(&head,2);
    push(&head,8);

    puts("Created linked list: ");
    PrintList(head);
    deleteNode(&head,4);
    puts("\n linked list after deletion at pos 4: ");
    PrintList(head);
    return 0;

}