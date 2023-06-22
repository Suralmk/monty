#include "monty.h"

/**
* function_pop - the top of the stack is removed by this function.
* @head: pointer to the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_pop(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	tmp = *head;

	if (!tmp)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	*head = tmp->next;
	free(tmp);
}

/**
* function_pint -  this function prints the stack's top element
* @head: pointerto the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
* function_nop - this function do nothing
* @head: pointer to the first node of a stack
* @counter: line counter number
*
* Return: void
*/
void function_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
