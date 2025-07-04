#ifndef STACK_H
#define STACK_H

#include "linkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct stack
{
	link* top; // pointer to the top link in the stack

} stack;

void push(stack* s, unsigned int element);
int pop(stack* s); // Return -1 if stack is empty

void initStack(stack* s);
void cleanStack(stack* s);

bool isEmpty(stack* s);
bool isFull(stack* s);

#endif // STACK_H