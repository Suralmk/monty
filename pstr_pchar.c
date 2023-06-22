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
	stack_t *ptr;

	ptr = *head;
	if (!ptr)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(plane.box);
		free(plane.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (ptr->n > 127 || ptr->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(plane.box);
		free(plane.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ptr->n);
}

/**
* function_pstr - starting from thee top of the stack prints string
* and after printing the sstring print a new line
* @head: pointer to the head of theack
*
* Return: void
*/
void function_pstr(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	(void) counter;

	ptr = *head;
	for (; ptr != NULL; )
	{
		if (ptr->n > 127 || ptr->n <= 0)
		{
			break;
		}
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	printf("\n");
}
