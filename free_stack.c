#include "monty.h"

/**
* free_stack - this function frees the linked list, stack
* @head: pointer to the head of the stack
*
* Return: void
*/
void free_the_stack(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

/**
* fUNCTION_stack - prints the top of the stack
* @head: the head of the stack, linked list
* @counter: line counter number
*
* Return: void
*/
void function_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
