#include "monty.h"

/**
* function_rotr - this function rotates the stack to the bottom
* @head: pointer tot the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *ptr;

	ptr = *head;
	if (*head == NULL || ptr->next == NULL)
	{
		return;
	}

	for (; ptr->next != NULL; )
	{
		ptr = ptr->next;
	}

	ptr->next = *head;
	ptr->prev->next = NULL;
	ptr->prev = NULL;
	(*head)->prev = ptr;
	(*head) = ptr;
}

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

	if (*head == NULL || tmp->next == NULL)
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
