#include "linkedList.h"

void initList(linkedList* list)
{
	list->head = nullptr; // Initialize the head of the list to NULL
}

void addToBeginning(linkedList* list , unsigned int newValue)
{
	link* newLink = new link; // Create a new link
	newLink->value = newValue; // Set the value of the new link

	newLink->next = list->head; // Point the new link to the current head
	list->head = newLink; // Update the head to the new link

}

int removeHead(linkedList* list)
{
	if (list->head == nullptr) // Check if the list is empty
	{
		return -1; // Return -1 if the list is empty
	}
	link* temp = list->head;
	int removedValue = temp->value; // Store the value to return
	list->head = temp->next; // Update the head to the next link
	delete temp; // Free the memory of the removed link
	return removedValue; // Return the value of the removed link
}



void deleteLink(link* l)
{
	delete l; // Free the memory of the link
}

void cleanList(linkedList* list)
{
	while (list->head != nullptr) // While there are links in the list
	{
		link* temp = list->head; // Store the current head
		list->head = temp->next; // Move the head to the next link
		delete temp; // Free the memory of the removed link
	}
	list->head = nullptr; // Set the head to NULL after cleaning
}