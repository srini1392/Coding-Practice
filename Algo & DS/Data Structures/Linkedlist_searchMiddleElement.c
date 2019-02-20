/***************************************************************************************/ 
/*             Name                : Linkedlist_searchMiddleElement.c                  */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-20 14:28:03                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node*next;
};


/*  METHOD 1: */
/*  Traverse the whole linkedlist and count the number of nodes. Now traverse the list again till count/2 and 
    return the node at count/2 */










/*  METHOD 2: */
/*  Traverse the Linkedlist using two pointers. Move one pointer by one and the other by two.
    When the fast pointer reaches end, the slow pointer will reach middle. */
void printMiddle(struct Node*head){

    /* allocate two pointers */
    struct Node*fast_ptr = head;
    struct Node*slow_ptr = head;

    if (head != NULL){
        while (fast_ptr != NULL && fast_ptr->next != NULL){
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("the middle element is [%d]\n\n",slow_ptr->data);
    }
}










/*  METHOD 3: */
/*  Create a new node as the mid element as head, and initialise a counter to 0. Traverse the list from head, while traversing
    increment the counter and change the mid to mid->next whenever the counter is odd.
    So the mid will move only half the total length of the list */
void printMiddle3(struct Node*head){
    int count =0;
    struct Node*mid = head;

    while(head!=NULL){

        //update mid when count is odd number
        if(count & 1)
            mid = mid->next;
        
        ++count;
        head = head->next;
    }

    //if empty list is given
    if(mid!=NULL)
        printf("the middle element is [%d]\n\n",mid->data);

}

















/* Push the contents to linkedlist */
void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = 
        (struct Node*) malloc(sizeof(struct Node)); 
  
    /* put in the data  */
    new_node->data  = new_data; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
} 




// A utility function to print a given linked list 
void printList(struct Node *ptr) 
{ 
    while (ptr != NULL) 
    { 
        printf("%d -> ", ptr->data); 
        ptr = ptr->next; 
    } 
    printf("NULL\n"); 
} 
  
/* Driver program */
int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
    int i; 
  
    for (i=5; i>0; i--) 
    { 
        push(&head, i); 
        printList(head); 
        printMiddle3(head); 
    } 
    return 0; 
} 