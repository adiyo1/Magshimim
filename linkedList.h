#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/* a link that contains a positive integer value */
typedef struct link
{
	unsigned int value; // the value of the link
	struct link* next; // pointer to the next link in the list
} link;

typedef struct linkedList
{
	link* head; // pointer to the first link in the list

} linkedList;

void initList(linkedList* list); // initialize list
void addToBeginning(linkedList* list, unsigned int newValue); // add new link in the beginning of list with newValue in it
int removeHead(linkedList* list); // return the value from the first link in list, and change the first link to head->next. return -1 if list is empty
void cleanList(linkedList* list); // delete all links from memory

#endif // LINKEDKIST_H