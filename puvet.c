#include "monty.h"
/**
 * puvet - prints the top
 * @first: stack first
 * @numerator: line_number
 * Return: no return
*/
void puvet(stack_t **first, unsigned int numerator)
{
	if (*first == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", numerator);
		fclose(bus.file);
		free(bus.content);
		getmefree(*first);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*first)->n);
}

