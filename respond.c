#include "monty.h"
/**
* respond - responds the opcode
* @stack: first linked list - stack
* @numerator: line_numerator
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int respond(char *content, stack_t **stack, unsigned int numerator, FILE *file)
{
	instruction_t opst[] = {
				{"push", getover}, {"pall", validwe}, {"pint", puvet},
				{"pop", deletehere},
				{"swap", replacer},
				{"add", additional},
				{"nop", nullify},
				{"sub", subtractor},
				{"div", divisor},
				{"mul", multiplier},
				{"mod", modification},
				{"pchar", insertPc},
				{"pstr", printStringg},
				{"rotl", rofrl},
				{"rotr", rover},
				{"queue", onLine},
				{"stack", strudder},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, numerator);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", numerator, op);
		fclose(file);
		free(content);
		getmefree(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

