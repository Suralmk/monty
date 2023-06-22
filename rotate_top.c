#include "monty.h"

/**
* finction_rotl- rotate the stack to the top
* @head: pointer to the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp, *ptr;
	
	tmp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ptr = (*head)->next;
	ptr->prev = NULL;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = ptr;
}
