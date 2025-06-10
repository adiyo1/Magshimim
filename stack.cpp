#include "stack.h"

void push(stack* s, unsigned int element)
{
	link* newLink = new link; // Assign the new link to a variable for clarity
	newLink->value = element; // Set the value of the new link

	newLink->next = s->top; // Point the new link to the current head of the list

	s->top = newLink; // Update the top of the stack to the new link
}

int pop(stack* s)
{
	if (s->top == nullptr) // Check if the stack is empty
	{
		return -1; // Return -1 if the stack is empty
	}

	link* temp = s->top; // Store the current top link
	int poppedValue = temp->value; // Store the value to return

	s->top = temp->next; // Update the top to the next link

	delete temp; // Free the memory of the popped link

	return poppedValue; // Return the value of the popped link
}

void initStack(stack* s)
{
	s->top = nullptr; // Initialize the top of the stack to NULL
}


void cleanStack(stack *s)
{
	while (s->top != nullptr) // While there are links in the stack
	{
		link* temp = s->top; // Store the current top link
		s->top = temp->next; // Move the top to the next link
		delete temp; // Free the memory of the removed link
	}
}

bool isEmpty(stack *s)
{
	return (s->top == nullptr); // Return true if the stack is empty, false otherwise
}

bool isFull(stack* s)
{
	// can never be full. because it is based on linked list
	return false;
}
