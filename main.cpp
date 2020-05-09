/*
 * Exam One: Stack
 *  A Stack is a container class that follows the 'last in, first out' 
 *  approach. The last item to be pushed to the stack is the first item
 *  to be popped off of the Stack.
 * Wednesday, February 26, 2020
 * Chase Urban
 */

#include <cstdlib>
#include <iostream>
#include "Stack.h"

using namespace std;
using namespace stack;

int main(int argc, char** argv)
{
    Stack s1;
    s1.push(0.1);                                   //tests push(itemType)
    s1.push(2.3);
    cout << "Top of s1 is " << s1.top() << endl;            //tests top()
    cout << "Size of s1 is " << s1.size() << endl;          //tests size()
    cout << "Item popped from s1 is " << s1.pop() << endl;  //tests pop()
    cout << "Top of s1 is " << s1.top() << endl;
    cout << "Size of s1 is " << s1.size() << endl << endl;
    
    s1.push(2.3);
    s1.push(4.5);
    s1.push(6.7);
    s1.push(8.9);
    cout << "Top of s1 is " << s1.top() << endl;
    cout << "Size of s1 is " << s1.size() << endl;
    cout << "Item popped from s1 is " << s1.pop() << endl;
    cout << "Top of s1 is " << s1.top() << endl;
    cout << "Size of s1 is " << s1.size() << endl << endl;
    
    Stack s2(s1);                               //tests copy constructor
    cout << "s1 == s2? ";
    if(s1 == s2)                                            //tests ==
        cout << "true" << endl << endl;
    else
        cout << "false" << endl << endl;
    
    cout << "Size of s1 is " << s1.size() << endl;
    cout << "Size of s2 is " << s2.size() << endl;   
    s1.push(s2);    
    cout << "Size of s1 is " << s1.size() << endl;
    cout << "Size of s2 is " << s2.size() << endl;
    cout << "Top of s1 is " << s1.top() << endl << endl;
    
    cout << "s1 == s2? ";
    if(s1 == s2)                                            //tests ==
        cout << "true" << endl << endl;
    else
        cout << "false" << endl << endl;

    s2 = s1;                                                //tests =
    
    cout << "s1 == s2? ";
    if(s1 == s2)                                            //tests ==
        cout << "true" << endl << endl;
    else
        cout << "false" << endl << endl;
    
    s2.clear();                                             //tests clear()
    cout << "s1 == s2? ";
    if(s1 == s2)                                            //tests ==
        cout << "true" << endl;
    else
        cout << "false" << endl;
    cout << "Is s2 empty? ";
    if(s2.empty())                                          //tests empty()
        cout << "true" << endl << endl;
    else
        cout << "false" << endl << endl;
    
    
    
    
    
    
    
    
    return 0;
}

