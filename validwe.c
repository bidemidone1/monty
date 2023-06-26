#include "monty.h"
/**
 * validwe - prints the stack
 * @first: stack first
 * @numerator: no used
 * Return: no return
*/
void validwe(stack_t **first, unsigned int numerator)
{
	stack_t *h;
	(void)numerator;

	h = *first;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

