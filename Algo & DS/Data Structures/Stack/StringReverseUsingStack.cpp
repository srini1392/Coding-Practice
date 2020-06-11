/***************************************************************************************/ 
/*             Name                : StringReverseUsingStack.cpp                       */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-28 12:15:40                               */
/***************************************************************************************/


/* To Reverse a string using Stack

    1) Create an empty stack.
    2) One by one push all characters of string to stack.
    3) One by one pop all characters from stack and put them back to string. 

*/


#include <iostream>
#include <stack>
using namespace std;


//Stack class
class Stack {
    private:
        char *a;

    public:
        int t;
        void pop();
        void push(char b);
        bool empty();
        Stack(int size){
            a = new char[size];
            t = -1;
        }

};



//Class to print out element
void Stack::pop(){
    if(empty()){
        cout <<"Stack is empty" <<endl;
        return;
    }

    cout << a[t];
    t--;
}


//class to Insert element
void Stack :: push(char b){
    a[++t] = b;
}


//to check if stack is empty or not
bool Stack :: empty(){
    return t<0;
}


//Function to reverse string
void reverse (Stack k){
    while(!k.empty()){
        k.pop();
    }
}




//driver code
int main(){

    Stack block(20);

    block.push('o');
    block.push('l');
    block.push('l');
    block.push('e');
    block.push('h');
    reverse(block);

    return 0;
}