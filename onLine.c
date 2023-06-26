#include "monty.h"
/**
 * onLine - prints the top
 * @first: stack first
 * @numerator: line_number
 * Return: no return
*/
void
onLine(stack_t **first, unsigned int numerator)
{
	(void)first;
	(void)numerator;
	bus.feel = 1;
}

/**
 * queueaddition - add node to the tail stack
 * @n: new_value
 * @first: first of the stack
 * Return: no return
*/
void queueaddition(stack_t **first, int n)
{
	stack_t *new_node, *aux;

	aux = *first;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*first = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

