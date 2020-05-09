/*
 * Exam One: Header file for stack class
 * Wednesday, February 26, 2020
 * Chase Urban
 */

#ifndef STACK_H
#define STACK_H

namespace stack
{
    typedef double itemType;
}

using namespace stack;

class Stack {
public:
    /**
     * Constructor, has a default value of 10 for the capacity
     * Precondition: c, the capacity of the Stack, must be > 0
     */
    Stack(int c = 10);
    
    /**
     * Copy constructor
     * Precondition: s, a Stack to copy
     */
    Stack(const Stack &s);
    
    /**
     * Destructor
     */
    ~Stack();
    
    /**
     * Gives the size of the array
     * Postcondition: the size of the Stack
     */
    int size()const;
    
    /**
     * Gives the top item of the Stack without removing it
     * Postcondition: top item of the Stack, does not remove it
     */
    itemType top()const;
    
    /**
     * Checks to see if the Stack is empty
     * Postcondition: boolean as to if the Stack is empty or not
     */
    bool empty()const;
    
    /**
     * Push, to put an item on top of the Stack
     * Precondition: an argument of type itemType
     */
    void push(const itemType);
    
    /**
     * Push, to empty a given Stack onto the Stack calling this function
     * Precondition: an object of type Stack
     */
    void push(Stack& s);
    
    /**
     * Pop, returns the top item and removes it from the Stack
     * Postcondition: the top item of the Stack, removed from the Stack
     */
    itemType pop();
    
    /**
     * Clears the Stack, and sets all values back to default.
     */
    void clear();
    
    /**
     * Overload of the assignment operator
     * Precondition: an object of type Stack.
     */
    void operator =(const Stack &s);
   
    /**
     * Overload of the isEqual operator
     * Precondition: an object of type Stack.
     * Postcondition: a boolean whether the two Stacks are equal.
     */
    bool operator ==(const Stack &s)const;    
    
private:
    int items;
    int capacity;
    itemType *data;
    
    /**
     * Increases the capacity of the Stack
     */
    void increaseCapacity();
    
};

#endif /* STACK_H */