Author  : [Srinikethan Mankala
    ](mailto:sriz1392@gmail.com)

<!-- Title and Heading Content -->
# DATA STRUCTURES
A data structure is a particular way of organizing data in a computer so that it can be used effectively. The idea is to reduce the space and time complexities of different tasks.
<!-- --------------------------------------------------------------- -->



*Mentioned Below are the Linear Data Structures*


<!-- Begining of Arrays -->
# Array

Array is a data structure used to store homogeneous elements at contiguous locations. Size of an array must be provided before storing data.

Let size of array be n.

>>
    Accessing Time    :   O(1)     [This is possible because elements are stored at contiguous locations]
    Search Time       :   O(n)     [for Sequential Search]
                      :   O(log n) [for Binary Search [If Array is sorted]
    Insertion Time    :   O(n)     [The worst case occurs when insertion happens at the Beginning of an 
                                    array and requires shifting all of the elements]
    Deletion Time     :   O(n)     [The worst case occurs when deletion happens at the Beginning of an 
                                    array and requires shifting all of the elements]
>>

<!-- End of Arrays -->








<!-- Begining of Linked List -->
# Linked List
Like arrays, Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at contiguous location; the elements are linked using pointers.
Purpose of a linked list is to provide a consistent mechanism to store and access an arbitrary amount of data.
In an array, data is stored contiguously & contiguous data provides performance benefits (Data locality), iterating over data is simple
& data can be accessed directly by index (random access) in constant time.


            HEAD
              |
              |
              |
              V        
        +--------+-------+      +--------+-------+      +--------+-------+
        | Data(A)| Next  | ---> | Data(B)| Next  | ---> | Data(C)| Next  | ---> NULL
        +--------+-------+      +--------+-------+      +--------+-------+


        Accessing time of an element    : O(n)
        Search time of an element       : O(n)
        Insertion of an Element         : O(1) [If we are at the position where we have to insert an element]
        Deletion of an Element          : O(1) [If we know address of node previous the node to be deleted]

 
Arrays can be used to store linear data of similar types, but arrays have following limitations.
* The size of the arrays is fixed: So we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the           upper limit irrespective of the usage.
* Inserting a new element in an array of elements is expensive, because room has to be created for the new elements and to create        room existing elementhave to shifted.

**Advantages over arrays**
* Dynamic size
* Ease of insertion/deletion

**Drawbacks**
* Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists efficiently with its default implementation.
* Extra memory space for a pointer is required with each element of the list.
* Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of     linked lists.

#### Representation of LinkedList:

At the core of linked list data structure is the Node. 
A Node is a container that provides ability to both store data & connect to other nodes.

A linkedlist is represented by pointer to the first node of the Linked List. 
The first node is called HEAD. If the Linked List is empty, then the head value is NULL.
Each node in a list consists of two parts :
* data
* pointer(or reference) to the next node
   
#### Addition of Node in Linked List
A new node in a linked list can be added in three ways:
* at the front of the linked list
* after a given node
* at the end of the linked list

#### Traversal of Linked List:
*METHOD 1:*
Traverse the whole linkedlist and count the number of nodes. Now traverse the list again till  $count/2$  and return the node at  $count/2$ 

*METHOD 2:*
Traverse the Linkedlist using two pointers. Move one pointer by one and the other by two. When the fast pointer reaches end, the slow pointer will reach middle.

*METHOD 3:*
Create a new node as the mid element as head, and initialise a counter to 0. Traverse the list from head, while traversing
increment the counter and change the mid to mid->next whenever the counter is odd. 
So the mid will move only half the total length of the list

#### Steps to delete the Node:
3 steps are needed to delete a node in the Linked list
* find the previous node to be deleted
* change the next of previous node
* free memory for the node to be deleted

<!-- End of Linked List -->







<!--------- Begining of Stack -->
# Stack
Stack is a Linear data structure which follows a particular order in which the operations are performed.</br>
The order may be **LIFO**( Last -In -First -Out) or **FILO** (First -In- Last- Out) </br>
In Stack --> Insertion and Deletion happens on the same end

>> 
    Insertion : O(1)
    Deletion  : O(1)
    Access Time : O(n) [Worst Case]
>>

Functions associated with stack are:
* empty() - Returns whethere the stack is empty  O(1)
* size()  - Returns the size of the stack O(1)
* top()   - Returns a reference to the top most element of stack O(1)
* push(g) - Adds the element 'g' at the top of stack O(1)
* pop()   - Deletes the top most element of the stack O(1)
* Access Time - O(n) worst case

#### eg :
* Stacks are used for maintaining the function calls ( i.e, the last called function must be called first)
* we can always remove recursions with help of stacks.
* Stacks are also used where we have to reverse a word, check for balanced paranthesis, and in editors where the word you typed the last would be the 
  first to be removed when you UNDO operation
* Stacks are used in web browsers to implement back functionality.

<!-- End of Stack -->








<!--Begining of Queue  -->
# Queue
A queue or **FIFO** (first in, first out) is an abstract data type that serves as a collection of elements, with two principal operations: 
* *Enqueue* -</br>
    > the process of adding an element to the collection.(The element is added from the rear side)</br>
* *Dequeue* -</br> 
    > the process of removing the first element that was added. (The element is removed from the front side). 

*Queue* can be implemented by using both array and linked list.

>> 
    Insertion : O(1)
    Deletion  : O(1)
    Access Time : O(n) [Worst Case]
>>


So any situation where resources are shared among multiple users and served on first come first server basis.</br>
**eg :**
* include CPU scheduling, Disk Scheduling.
* Another application of queue is when data is transferred asynchronously (data not necessarily received at same rate as sent) between two processes viz.,  IO Buffers, pipes, file IO, etc.

<!-- End of Queue -->








<br></br>
<!-- Data structure ALignment and Padding -->
# Data Structure Alignment 
Data structure alignment is the way data is arranged and accessed in computer memory. Data alignment and Data structure padding are two different issues but are related to each other and together known as Data Structure alignment.

* Data alignment 
    > Data alignment means putting the data in memory at address equal to some multiple of the word size. This increases the performance of system due to the way the CPU handles memory

* Data structure padding
    >Now, to align the data, it may be necessary to insert some extra bytes between the end of the last data structure and the start of the next data structure as the data is placed in memory as multiples of fixed word size. This insertion of extra bytes of memory to align the data is called data structure padding.

Consider the structure as shown below:
>>
    struct 
    {
        char a;
        short int b;
        int c;
        char d;
    }
>>

Now we may think that the processor will allocate memory to this structure as shown below:
>>
    Size of 1 block = 1 byte
    Size of 1 row   = 4 byte

            +--------+--------+--------+--------+
            |   a    |   b    |   b    |   c    |
            +--------+--------+--------+--------+
            |   c    |   c    |   c    |   d    |
            +--------+--------+--------+--------+
>>
The total memory allocated in this case is 8 bytes. But this never happens as the processor can access memory as fixed word size of 4 bytes. So, the integer variable c can not be allocated memory as shown above. An integer variable requires 4 bytes. The correct way of allocation of memory is shown below for this structure using padding bytes.

>>
    Size of 1 block = 1 byte
    Size of 1 row   = 4 byte

            +--------+--------+--------+--------+
            |   a    |padding |   b    |   b    |
            +--------+--------+--------+--------+
            |   c    |   c    |   c    |   c    |
            +--------+--------+--------+--------+
            |   d    |padding |padding |padding |
            +--------+--------+--------+--------+
>>
The processor will require a total of 12 bytes for the above structure to maintain the data alignment.