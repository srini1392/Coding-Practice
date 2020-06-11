/***************************************************************************************/ 
/*             Name                : Linkedlist_deleteWhole.c                          */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-20 11:17:40                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node*next;
};

/*Function to delete the whole linkedlist */
void deleteList(struct Node**head_ref){

    /* deref the head_ref to get the real head */
    struct Node*current = *head_ref;
    struct Node*next;

    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }

    /* deref the head_ref to affect the real head back in caller */
    *head_ref = NULL;

}


/* Pushing on the linkedlist */
void push(struct Node**head_ref, int new_data){

    /* allocate new node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    /* put data into it */
    new_node-> data = new_data;
    new_node-> next = (*head_ref);
    (*head_ref)     = new_node;
}


/* Printing the list */
void PrintList(struct Node * node){
    while(node!= NULL){
        printf("%d ", node->data);
        node =  node->next;
    }
}


/* Main driver program */
int main(){

    /* start with empty list */
    struct Node *head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);

    puts ("the created linked list : ");
    PrintList(head);
    deleteList(&head);
    puts ("\nDeleted the List..!");
 
    return 0;
}