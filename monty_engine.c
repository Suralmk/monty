#include "monty.h"

/**
* run_mty - run the monty file opcode
* @stack: this is the stac's head in the list
* @counter: line counter number
* @box: pointer to the monty file box
* @item: item in a line
*
* Return: void
*/
int run_mty(char *item, stack_t **stack, unsigned int counter, FILE *box)
{
	instruction_t opcoder[] = {
				{"push", function_push}, {"pall", function_pall},
				{"pint", function_pint},
				{"pop", function_pop}, {"swap", function_swap},
				{"add", function_sum},
				{"nop", function_nop},
				{"sub", function_sub}, {"div", function_div},
				{"mul", function_mul},
				{"mod", function_mod}, {"pchar", function_pchar},
				{"pstr", function_pstr}, {"rotl", function_rotl},
				{"rotr", function_rotr},
				{"queue", function_queue},
				{"stack", function_stack},
				{NULL, NULL}
				};
	unsigned int num;
	char *op_code;

	num = 0;
	op_code = strtok(item, " \n\t");
	if (op_code != NULL && op_code[0] == '#')
		return (0);
	plane.arg = strtok(NULL, " \n\t");
	for (; opcoder[num].opcode && op_code; num++)
	{
		if (strcmp(op_code, opcoder[num].opcode) == 0)
		{	opcoder[num].f(stack, counter);
			return (0);
		}
	}
	if (op_code && opcoder[num].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op_code);
		fclose(box);
		free(item);
		free_the_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
