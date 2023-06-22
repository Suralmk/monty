#include "monty.h"

/**
* function_pstr - starting from thee top of the stack prints string
* and after printing the sstring print a new line
* @head: pointer to the head of theack
*
* Return: void
*/
void function_pstr(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	(void) counter;

	tmp = *head;
	while (tmp)
	{
		if (tmp->n > 127 || tmp->n <= 0)
		{
			break;
		}
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
