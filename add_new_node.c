#include "monty.h"

/**
* add_node - addition f a new node at the top of the stack
* @head: pointer to the first node of the stack
* @n: new value of the new node to be added at the top
*
* Return: void
*/
void add_node(stack_t **head, int n)
{
stack_t *n_node, *tmp;

	n_node = malloc(sizeof(stack_t));
	tmp = *head;

	if (n_node == NULL)
	{ printf("Error\n");
		exit(0);
	}
	if (tmp != NULL)
		tmp->prev = n_node;
	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;
}
