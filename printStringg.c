#include "monty.h"
/**
 * printStringg - prints the string starting at the top of the stack,
 * followed by a new
 * @first: stack first
 * @numerator: line_number
 * Return: no return
*/
void printStringg(stack_t **first, unsigned int numerator)
{
	stack_t *h;
	(void)numerator;

	h = *first;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

