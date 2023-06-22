#include "monty.h"

/**
* function_pchar - print a char at the stack's top and after
* that print a new line
* @head: pointer to the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_pchar(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	tmp = *head;
	if (!tmp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (tmp->n > 127 || tmp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp->n);
}
