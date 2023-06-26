#include "monty.h"
/**
 * getover - add node to the stack
 * @first: stack first
 * @numerator: line_number
 * Return: no return
*/
void getover(stack_t **first, unsigned int numerator)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", numerator);
			fclose(bus.file);
			free(bus.content);
			getmefree(*first);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", numerator);
		fclose(bus.file);
		free(bus.content);
		getmefree(*first);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
if (bus.feel == 0)
nodeadder(first, n);
else
queueaddition(first, n);
}

