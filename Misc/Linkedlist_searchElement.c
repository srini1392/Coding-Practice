/***************************************************************************************/ 
/*             Name                : Linkedlist_searchElement.c                        */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-20 01:23:14                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node*next;
};

/* TO insert element */
void push(struct Node**head_ref, int new_key){

    //allocate a new node
    struct Node*new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_key;
    new_node ->next = (*head_ref);
    (*head_ref) = new_node;
}



/* Iterative Solution */
/*  1)Initialize a node pointer, current = head.
    2) Do following while current is not NULL
        a) current->key is equal to the key being searched return true.
        b) current = current->next
    3) Return false 
*/
bool searchItem(struct Node*head, int x){
    struct Node*current = head; //Initialise the current
    while(current != NULL){
        if(current->data == x)
            return true;
        current = current->next;
    }
    return false;
}



/* Recursive Solution */
/* bool search(head, x)
    1) If head is NULL, return false.
    2) If head's key is same as x, return true;
    2) Else return search(head->next, x)  
*/
bool searchItemRecursive(struct Node*head, int x){
    
    //base case to check if ll is empty
    if(head == NULL)
        return false;
    
    //if key is prsent in current node
    if(head->data == x)
        return true;
    
    //recur search for remaining list
    return searchItemRecursive(head->next, x);
}


/* Driver program to test count function*/
int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
    int x = 21; 
  
    /* Use push() to construct below list 
     14->21->11->30->10  */
    push(&head, 10); 
    push(&head, 30); 
    push(&head, 11); 
    push(&head, 21); 
    push(&head, 14); 
  
    searchItem(head, 21)? printf("\nYes") : printf("\nNo"); 
    searchItemRecursive(head, 1)? printf("\nYes") : printf("\nNo"); 
    return 0; 
} 