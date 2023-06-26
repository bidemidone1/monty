#include "monty.h"
/**
 * nodeadder - add node to the first stack
 * @first: first of the stack
 * @n: new_value
 * Return: no return
*/
void
nodeadder(stack_t **first, int n)
{

	stack_t *new_node, *aux;

	aux = *first;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *first;
	new_node->prev = NULL;
	*first = new_node;
}

