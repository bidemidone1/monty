#include "monty.h"
/**
* getmefree - frees a doubly linked list
* @first: first of the stack
*/
void getmefree(stack_t *first)
{
	stack_t *aux;

	aux = first;
	while (first)
	{
		aux = first->next;
		free(first);
		first = aux;
	}
}

