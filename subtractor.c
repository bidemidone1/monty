#include "monty.h"
/**
  *subtractor- s
  *@first: stack first
  *@numerator: line_number
  *Return: no return
 */
void subtractor(stack_t **first, unsigned int numerator)
{
	stack_t *aux;
	int sus, nodes;

	aux = *first;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", numerator);
		fclose(bus.file);
		free(bus.content);
		getmefree(*first);
		exit(EXIT_FAILURE);
	}
	aux = *first;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*first = aux->next;
	free(aux);
}

