#ifndef _MONTY_H_
#define _MONTY_H_

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


/**
* struct bus_s - variable arguments, line counter number, unisgned int
* the value off the arguents, File
* @arg:  argument value
* @box: pointer to the box file
* @item: line item
* @lifi: flag change stack <-> queue
*
* Description: carries values through the program
*/
typedef struct bus_s
{
	char *arg;
	FILE *box;
	char *item;
	int lifi;
}  plane_t;
extern plane_t plane;



void function_pchar(stack_t **head, unsigned int counter);
void function_rotl(stack_t **head, unsigned int counter);
void function_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void function_queue(stack_t **head, unsigned int counter);
void function_pstr(stack_t **head, unsigned int counter);
void function_swap(stack_t **head, unsigned int counter);
void function_pall(stack_t **head, unsigned int counter);
void function_nop(stack_t **head, unsigned int counter);
void function_pint(stack_t **head, unsigned int number);
void function_pop(stack_t **head, unsigned int counter);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void function_push(stack_t **head, unsigned int number);
void function_mod(stack_t **head, unsigned int counter);
void function_mul(stack_t **head, unsigned int counter);
void function_div(stack_t **head, unsigned int counter);
void function_sum(stack_t **head, unsigned int counter);
void function_sub(stack_t **head, unsigned int counter);
void free_the_stack(stack_t *head);
void function_stack(stack_t **head, unsigned int counter);
int run_mty(char *chr, stack_t **head, unsigned int counter, FILE *box);
#endif
