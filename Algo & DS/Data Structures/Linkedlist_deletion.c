/***************************************************************************************/ 
/*             Name                : Linkedlist_deletion.c                             */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-15 20:30:39                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* Note: 
*   3 steps are needed to delete a node in the linkedlist
*   a) find the previous node to be deleted
*   b) change the next of previous node
*   c) free memory for the node to be deleted
*/

struct Node{
    int data;
    struct Node * next;
};

/* Given a reference (pointer to pointer) to the head of a list 
   and an int, inserts a new node on the front of the list. 
   Creation of New Node                                 */
void push(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}


/* Given a reference (pointer to pointer) to the head of a list 
   and a key, deletes the first occurrence of key in linked list */
void deleteNode(struct Node**head_ref, int key){
    //store head in a temp node
    struct Node* temp = *head_ref, *prev;

    //if head_node itself holds the key to be deleted
    if(temp!= NULL && temp->data == key){
        *head_ref = temp->next; //changed head
        free(temp);             //free the node
        return;
    }

    //Search for the key to be deleted
    while(temp!=NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    //if key was not present in linkedlist
    if(temp == NULL) return;

    //unlink the node from linkedlist
    prev->next = temp->next;

    //free the node
    free(temp);
}


//Printing the LinkedList
void printList(struct Node *node) { 
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
}


/* Main driver Program */
int main(){

    /* Start the LinkedList with null */
    struct Node *head = NULL;
    push(&head,7);
    push(&head,1);
    push(&head,3);
    push(&head,2);
    
    puts("\ncreated a linkedlist");
    printList(head);
    deleteNode(&head,3);
    puts("\n linkedlist after deletion of node");
    printList(head);

    return 0;
}