#include "monty.h"
/**
  * rover- rotates the stack to the bottom
  * @first: stack first
  * @numerator: line_number
  * Return: no return
 */
void
rover(stack_t **first, __attribute__((unused)) unsigned int numerator)
{
	stack_t *copy;

	copy = *first;
	if (*first == NULL || (*first)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *first;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*first)->prev = copy;
	(*first) = copy;
}

