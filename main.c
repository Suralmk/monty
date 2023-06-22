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
	size_t i = 0;
	ssize_t space_get = 1;
	stack_t *temp = NULL;
	unsigned int num = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.box = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	for (; space_get > 0; )
	{
		item = NULL;
		space_get = getline(&item, &i, file);
		bus.item = item;
		num++;
		if (!(space_get <= 0))
		{
			run_mty(item, &temp, num, file);
		}
		free(item);
	}
	free_the_stack(temp);
	fclose(file);
return (0);
}
