#include "monty.h"

/**
* function_queue - the top of the queue is printed by this function
* @head: pointer to the first node of the queue
* @counter: line count
*
* Return: nothing
*/
void function_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
* add_queue - function that add node to the tail the queue
* @n: new value of the node to bee added at the end
* of the queue
* @head: pointer to the head of the queue
*
* Return: void
*/
void add_queue(stack_t **head, int n)
{
	stack_t *n_node, *ptr;

	ptr = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = n;
	n_node->next = NULL;
	if (ptr != NULL)
	{
		while (ptr->next)
			ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		*head = n_node;
		n_node->prev = NULL;
	}
	else
	{
		ptr->next = n_node;
		n_node->prev = ptr;
	}
}
