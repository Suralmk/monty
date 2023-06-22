#include "monty.h"

/**
* function_pall - print out all the values of the stack
* @head: pointer to the first node of the stack
*
* Return: nothing
*/
void function_pall(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	(void) counter;

	tmp = *head;
	if (!tmp)
		return;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
* function_swap - function that swaps the top two elements of the stack
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void function_swap(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, temp_value;

	tmp = *head;

	for (len = 0; tmp != NULL; len++)
	{
		tmp = tmp->next;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	temp_value = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = temp_value;
}
