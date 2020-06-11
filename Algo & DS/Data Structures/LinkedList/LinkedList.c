/***************************************************************************************/ 
/*             Name                : Linkedlist.c                                      */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-14 14:01:39                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*  Note:- 
*   Representation of LinkedList: 
*   
*   A linkedlist is represented by pointer to the first node of the LL. 
*   The first node is called HEAD. If the LL is empty, then the head value is NULL.
*   Each node in a list consists of 2 parts-
*   a) data
*   b) pointer(or reference) to the next node
*
*/


struct Node {
    int data;
    struct Node *next;
};


/* Main driver program to create a simple linked list with 3 nodes */

int main(){

    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // allocate 3 nodes in the heap
    head    = (struct Node*)malloc(sizeof(struct Node));
    second  = (struct Node*)malloc(sizeof(struct Node));
    third   = (struct Node*)malloc(sizeof(struct Node));

    /* Three blocks have been allocated  dynamically.  
     We have pointers to these three blocks as first, 
     second and third      
       head           second           third 
        |                |               | 
        |                |               | 
    +---+-----+     +----+----+     +----+----+ 
    | #  | #  |     | #  | #  |     |  # |  # | 
    +---+-----+     +----+----+     +----+----+ 
     
   # represents any random value. 
   Data is random because we haven’t assigned  
   anything yet  */


    head->data = 1;         //assign data in the first node
    head->next = second;    //Link the first node with second node

    /* data has been assigned to data part of first 
     block (block pointed by head).  And next 
     pointer of first block points to second.   
     So they both are linked. 
  
       head          second         third 
        |              |              | 
        |              |              | 
    +---+---+     +----+----+     +-----+----+ 
    | 1  | o----->| #  | #  |     |  #  | #  | 
    +---+---+     +----+----+     +-----+----+     
    */  

    second->data = 2;       //assign data in the second node
    second->next = third;   // link the second node to third

    /* data has been assigned to data part of second 
     block (block pointed by second). And next 
     pointer of the second block points to third  
     block. So all three blocks are linked. 
    
       head         second         third 
        |             |             | 
        |             |             | 
    +---+---+     +---+---+     +----+----+ 
    | 1  | o----->| 2 | o-----> |  # |  # | 
    +---+---+     +---+---+     +----+----+
    */  

    third->data = 3;        //assign data to the third node
    third->next = NULL;     //point the third node as end

    /* data has been assigned to data part of third 
    block (block pointed by third). And next pointer 
    of the third block is made NULL to indicate 
    that the linked list is terminated here. 
  
     We have the linked list ready.   
  
           head     
             | 
             |  
        +---+---+     +---+---+       +----+------+ 
        | 1  | o----->|  2  | o-----> |  3 | NULL | 
        +---+---+     +---+---+       +----+------+        
     
      
    Note that only head is sufficient to represent  
    the whole list.  We can traverse the complete  
    list by following next pointers.    
    */      


return 0;
}