#include "monty.h"
/**
 * insertPc - prints the char at the top of the stack,
 * followed by a new line
 * @first: stack first
 * @numerator: line_number
 * Return: no return
*/
void
insertPc(stack_t **first, unsigned int numerator)
{
	stack_t *h;

	h = *first;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", numerator);
		fclose(bus.file);
		free(bus.content);
		getmefree(*first);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", numerator);
		fclose(bus.file);
		free(bus.content);
		getmefree(*first);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}

