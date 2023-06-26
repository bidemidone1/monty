#include "monty.h"
/**
 * deletehere - prints the top top
 * @first: stack first
 * @numerator: line_number
 * Return: no return
*/
void deletehere(stack_t **first, unsigned int numerator)
{
	stack_t *h;

	if (*first == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", numerator);
		fclose(bus.file);
		free(bus.content);
		getmefree(*first);
		exit(EXIT_FAILURE);
	}
	h = *first;
	*first = h->next;
	free(h);
}

