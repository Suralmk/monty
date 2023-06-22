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
stack_t *strange, *ptr = *head;

        strange = malloc(sizeof(stack_t));
        if (!strange)
        { printf("Error\n");
                exit(0);
        }
            if (ptr != NULL)
                    ptr->prev = strange;
        strange->n = n;
        strange->next = *head;
        strange->prev = NULL;
        *head = strange;
}
