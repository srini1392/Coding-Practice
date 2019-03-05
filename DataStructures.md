Author  : [Srinikethan Mankala]
(mailto:sriz1392@gmail.com)

<!-- Title and Heading Content -->
# DATA STRUCTURES
A data structure is a particular way of organizing data in a computer so that it can be used effectively. The idea is to reduce the space and time complexities of different tasks.
<!-- --------------------------------------------------------------- -->



*Mentioned Below are the Linear Data Structures*

# Array

Array is a data structure used to store homogeneous elements at contiguous locations. Size of an array must be provided before storing data.

Let size of array be n.

|       Type      |  Big (O)   |                     Description                                      |
|-----------------|------------|----------------------------------------------------------------------|
|*Accessing Time:*|   O(1)     |This is possible because elements are stored at contiguous locations  |
|*Search Time:*   |   O(n)     |for Sequential Search                                                 |
|                 |   O(log n) |for Binary Search [If Array is sorted]                                |
|*Insertion Time:*|   O(n)     |The worst case occurs when insertion happens at the Beginning of an   |
|                 |            |array and requires shifting all of the elements                       |        
|*Deletion Time:* |   O(n)     |The worst case occurs when deletion happens at the Beginning of an    |
|                 |            |array and requires shifting all of the elements                       |

# Linked List

Like arrays, Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at contiguous location; the elements are linked using pointers.

Arrays can be used to store linear data of similar types, but arrays have following limitations.
<br>a) The size of the arrays is fixed: So we must know the upper limit on the number of elements in advance. Also, generally, the                allocated memory is equal to the upper limit irrespective of the usage.</br>
    b) Inserting a new element in an array of elements is expensive, because room has to be created for the new elements and to create        room existing elements have to shifted.

*Advantages over arrays*
  <br> a)Dynamic size</br>
       b)Ease of insertion/deletion

*Drawbacks*
   <br>a) Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary              search with linked lists efficiently with its default implementation.</br>
       b) Extra memory space for a pointer is required with each element of the list.</br>
       c) Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of     linked lists.

#### Representation of LinkedList:

A linkedlist is represented by pointer to the first node of the Linked List. 
The first node is called HEAD. If the Linked List is empty, then the head value is NULL.
Each node in a list consists of 2 parts :
<br>a) data</br>
    b) pointer(or reference) to the next node
   
#### Addition of Node in Linked List
A new node in a linked list can be added in three ways:
<br>a) at the front of the linked list</br>
    b) after a given node</br>
    c) at the end of the linked list

#### Traversal of Linked List:
*METHOD 1:*
Traverse the whole linkedlist and count the number of nodes. Now traverse the list again till count/2 and return the node at count/2 

*METHOD 2:*
Traverse the Linkedlist using two pointers. Move one pointer by one and the other by two. When the fast pointer reaches end, the slow pointer will reach middle.

*METHOD 3:*
Create a new node as the mid element as head, and initialise a counter to 0. Traverse the list from head, while traversing
increment the counter and change the mid to mid->next whenever the counter is odd. 
So the mid will move only half the total length of the list

#### Steps to delete the Node:
3 steps are needed to delete a node in the linkedlist
<br>a) find the previous node to be deleted</br>
    b) change the next of previous node </br>
    c) free memory for the node to be deleted




# Stack
Stack is a Linear data structure which follows a particular order in which the operations are performed
The order may be LIFO ( Last -In -First -Out) or FILO (First -In- Last- Out)
In Stack --> Insertion and Deletion happens on the same end

Functions associated with stack are:
    1. empty() - Returns whethere the stack is empty  O(1)
    2. size()  - Returns the size of the stack O(1)
    3. top()   - Returns a reference to the top most element of stack O(1)
    4. push(g) - Adds the element 'g' at the top of stack O(1)
    5. pop()   - Deletes the top most element of the stack O(1)
    6. Access Time - O(n) worst case

EXAMPLES:
Stacks are used for maintaining the function calls ( i.e, the last called function must be called first)
we can always remove recursions with help of stacks.
Stacks are also used where we have to reverse a word, check for balanced paranthesis, and
in editors where the word you typed the last would be the first to be removed when you UNDO operation
Stacks are used in web browsers to implement back functionality.

