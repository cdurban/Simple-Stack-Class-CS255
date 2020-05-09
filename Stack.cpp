/*
 * Exam One: Implementation file for stack class
 * Wednesday, February 26, 2020
 * Chase Urban
 */

#include <cstdlib>
#include "Stack.h"

using namespace stack;

Stack::Stack(int c)
{
    capacity = c;
    data = new itemType[capacity];
    items = 0;
}

Stack::Stack(const Stack& s)
{
    this->items = s.items;
    this->capacity = s.capacity;
    this->data = new itemType[capacity];
    for(int i =0; i < items; i++)
        this->data[i] = s.data[i];
}

Stack::~Stack()
{
    delete[] data;
}

int Stack::size() const
{
    return items;
}

itemType Stack::top() const
{
    return data[items-1];
}

bool Stack::empty() const
{
    if(items == 0)
        return true;
    return false;
}

void Stack::push(const itemType i)
{
    if(items == capacity)
        increaseCapacity();
    data[items++] = i;
}

void Stack::push(Stack& s)
{
    while(s.size() != 0)
        this->push(s.pop());
}

itemType Stack::pop()
{
    return data[--items];
}

void Stack::clear()
{
    capacity = 10;
    items = 0;
    data = new itemType[capacity];
}

void Stack::operator =(const Stack& s)
{
    this->items = s.items;
    this->capacity = s.capacity;
    if(this->data != NULL)
        delete[] data;
    this->data = new itemType[capacity];
    for(int i = 0; i < this->items; i++)
    {
        this->data[i] = s.data[i];
    }
}

bool Stack::operator ==(const Stack& s) const
{
    if(this->items != s.items)
        return false;
    if(this->capacity != s.capacity)
        return false;
    for(int i = 0; i < this->items; i++)
        if(this->data[i] != s.data[i])
            return false;
    return true;
}

void Stack::increaseCapacity()
{
    capacity *= 2;
    itemType *newData = new itemType[capacity];
    for(int i = 0; i < items; i++)
        newData[i] = data[i];
    delete[] data;
    data = newData;
}