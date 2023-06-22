#include "monty.h"

/**
* f_add - function that sums the stack's top two items
* @head: pointer to the pointer to the head of the stack
* @counter: line counter number
*
* Return: void
*/
void function_sum(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int len, n;

	tmp = *head;

	for (len = 0; tmp; len++)
	{
		tmp = tmp->next;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	n = tmp->n + tmp->next->n;
	tmp->next->n = n;
	*head = tmp->next;
	free(tmp);
}

/**
* function_sub - top Node subtraction function
* @head: pointer to the head of the stack
* @counter: line counter number
*
* Return: void
*/
void function_sub(stack_t **head, unsigned int counter)
{
	stack_t *tmpo;
	int sub_value, numd = 0;

	tmpo = *head;
	while (tmpo)
	{
		tmpo = tmpo->next;
		numd++;
	}
	if (numd < 2)
	{
		fprintf(stderr, "L%d: can't sub_value, stack too short\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmpo = *head;
	sub_value = tmpo->next->n - tmpo->n;
	tmpo->next->n = sub_value;
	*head = tmpo->next;
	free(tmpo);
}

/**
* function_mul - method that multiplies the stack's top two components
* @head: pointer to the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_mul(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int len, mul_value;

	tmp = *head;

	for (len = 0; tmp != NULL; len++)
	{
		tmp = tmp->next;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	mul_value = tmp->next->n * tmp->n;
	tmp->next->n = mul_value;
	*head = tmp->next;
	free(tmp);
}

/**
* function_div - divide  the top two elemts of the stack, linked list
* @head: pointer to the forst node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_div(stack_t **head, unsigned int counter)
{
	stack_t *tmpo;
	int len, div_result;

	tmpo = *head;
	for (len = 0; tmpo != NULL; len++)
	{
		tmpo = tmpo->next;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmpo = *head;
	if (tmpo->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	div_result = tmpo->next->n / tmpo->n;
	tmpo->next->n = div_result;
	*head = tmpo->next;
	free(tmpo);
}

/**
* function_mod - this function calculate the remondermodules of the top
* two elements o the stack
* @head: pointer to the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_mod(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, mod_value;

	tmp = *head;
	for (len = 0; tmp != NULL; len++)
	{
		tmp = tmp->next;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.item);
		free_the_stack(*head);
		exit(EXIT_FAILURE);
	}
	mod_value = tmp->next->n % tmp->n;
	tmp->next->n = mod_value;
	*head = tmp->next;
	free(tmp);
}