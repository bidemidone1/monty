#include "monty.h"
/**
  * rofrl- rotates the stack to the top
  * @first: stack first
  * @numerator: line_number
  * Return: no return
 */
void
rofrl(stack_t **first,  __attribute__((unused)) unsigned int numerator)
{
	stack_t *tmp = *first, *aux;

	if (*first == NULL || (*first)->next == NULL)
	{
		return;
	}
	aux = (*first)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *first;
	(*first)->next = NULL;
	(*first)->prev = tmp;
	(*first) = aux;
}

