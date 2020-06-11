/***************************************************************************************/ 
/*             Name                : Stack.cpp                                         */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-27 16:35:59                               */
/***************************************************************************************/

/* 
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

*/

#include <iostream>
#include <stack>
using namespace std;

void showstack(stack <int> s){
    while(!s.empty()){
        cout << "\t" <<s.top();
        s.pop();
    }
    cout << "\n";
}

int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(1);
    s.push(5);

    cout <<"the stack is :";
    showstack(s);

    cout << "\n s.size() : " << s.size();
    cout << "\n s.top() : " << s.top();

    cout <<"\n s.pop() :" ;
    s.pop();
    showstack(s);


    return 0;
}