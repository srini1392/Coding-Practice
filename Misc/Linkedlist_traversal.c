/***************************************************************************************/ 
/*             Name                : Linkedlist_traversal.c                            */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-14 15:06:40                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

/*General print function to traverse the list elements*/
void fun1(struct Node *n){
    while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
    printf("\n"); //newline
}




/* Function to print linkedlist in reverse order */
void fun2(struct Node* head) 
{ 
  if(head == NULL) 
    return; 
   
  fun2(head->next); 
  printf("%d  ", head->data);
}



/* Function to print alternative nodes in the list  from head->end & end->head */
void fun3(struct Node* head) 
{ 
  if(head== NULL) 
    return; 
  printf("%d", head->data);  
  
  if(head->next != NULL ) 
    fun3(head->next->next); 
  printf("%d  ", head->data);    
} 






/* Main Driver Program */
int main(){

    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head    = (struct Node*)malloc(sizeof(struct Node));
    second  = (struct Node*)malloc(sizeof(struct Node));
    third   = (struct Node*)malloc(sizeof(struct Node));

    head->data =1;
    head->next =second;

    second->data =2;
    second->next =third;

    third->data =3;
    third->next = NULL;

    fun1(head);     //traverse through list
    printf("\n");

    fun2(head);     // traverse through list in reverse order
    printf("\n \n");

    fun3(head);     // prints alternate nodes of the given Linked List, first from head to end, and then from end to head. 
                    // If Linked List has even number of nodes, then  skips the last node.
    printf("\n");
    

    return 0;

}