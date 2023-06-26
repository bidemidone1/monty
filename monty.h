#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @feel: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int feel;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *makemem(char *point, unsigned int prevSize, unsigned int currentSize);
ssize_t wedevin(char **linepoint, int file);
char  *line_nt(char *content);
void getover(stack_t **first, unsigned int figure);
void validwe(stack_t **first, unsigned int figure);
void puvet(stack_t **first, unsigned int figure);
int respond(char *content, stack_t **first, unsigned int numerator, FILE *file);
void getmefree(stack_t *first);
void deletehere(stack_t **first, unsigned int numerator);
void replacer(stack_t **first, unsigned int numerator);
void additional(stack_t **first, unsigned int numerator);
void nullify(stack_t **first, unsigned int numerator);
void subtractor(stack_t **first, unsigned int numerator);
void divisor(stack_t **first, unsigned int numerator);
void multiplier(stack_t **first, unsigned int numerator);
void 
modification(stack_t **first, unsigned int numerator);
void insertPc(stack_t **first, unsigned int numerator);
void printStringg(stack_t **first, unsigned int numerator);
void rofrl(stack_t **first, unsigned int numerator);
void rover(stack_t **first, __attribute__((unused)) unsigned int numerator);
void 
nodeadder(stack_t **first, int n);
void 
queueaddition(stack_t **first, int n);
void onLine(stack_t **first, unsigned int numerator);
void 
strudder(stack_t **first, unsigned int numerator);
#endif
