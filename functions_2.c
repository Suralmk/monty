#include "monty.h"

/**
* f_push - this function adds a new node at the top of the stack
* @head: pointer to the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_push(stack_t **head, unsigned int counter)
{
	int idx, n = 0, flagger = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			n++;

		while (bus.arg[n] != '\0')
		{
				if (bus.arg[n] > 57 || bus.arg[n] < 48)
					flagger = 1; 
			n++;
		}

		if (flagger == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.item);
			free_the_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE); }
	idx = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(head, idx);
	else
		add_queue(head, idx);
}
