/***************************************************************************************/ 
/*             Name                : Linkedlist_deleteAtPosition.c                             */
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

