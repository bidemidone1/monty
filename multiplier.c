#include "monty.h"
/**
 * multiplier - multiplies the top two elements of the stack.
 * @first: stack first
 * @numerator: line_number
 * Return: no return
*/
void multiplier(stack_t **first, unsigned int numerator)
{
	stack_t *h;
	int len = 0, aux;

	h = *first;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", numerator);
		fclose(bus.file);
		free(bus.content);
		getmefree(*first);
		exit(EXIT_FAILURE);
	}
	h = *first;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*first = h->next;
	free(h);
}

