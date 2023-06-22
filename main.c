#include "monty.h"
#include <stdio.h>
#define _GNU_SOURCE
#include <stdlib.h>

bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - a Monty code interpreter function
* @argc: count the arguments
* @argv: the value of the arguments
*
* Return: return 0 on success
*/
int main(int argc, char *argv[])
{
	char *item;
	FILE *file;
	size_t size = 0;
	ssize_t line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line > 0)
	{
		item = NULL;
		line = getline(NULL, &size, file);
		bus.item = item;
		counter++;
		if (line > 0)
		{
			run_mty(item, &stack, counter, file);
		}
		free(item);
	}
	free_the_stack(stack);
	fclose(file);
return (0);
}
