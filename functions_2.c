#include "monty.h"

/**
* function_push - this function adds a new node at the top of the stack
* @head: pointer to the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_push(stack_t **head, unsigned int counter)
{
        int num, j = 0, sign = 0;

        if (bus.arg)
        {
                if (bus.arg[0] == '-')
                        j++;
                while (bus.arg[j] != '\0')
                {
                                if (bus.arg[j] > 57 || bus.arg[j] < 48)
                                        sign = 1;
                        j++; }
                if (sign == 1)
                { fprintf(stderr, "L%d: usage: push integer\n", counter);
                        fclose(bus.box);
                        free(bus.item);
                        free_the_stack(*head);
                        exit(EXIT_FAILURE); }}
        else
        { fprintf(stderr, "L%d: usage: push integer\n", counter);
                fclose(bus.box);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE); }
        num = atoi(bus.arg);
        if (bus.lifi == 0)
                add_node(head, num);
        else
                add_queue(head, num);
}


/**
* function_pint -  this function prints the stack's top element
* @head: pointerto the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_pint(stack_t **head, unsigned int counter)
{
        stack_t *ptr;

        ptr = *head;
        if (ptr == NULL)
        {
                fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
                fclose(bus.box);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
        printf("%d\n", (*head)->n);
}

/**
* function_nop - this function do nothing
* @head: pointer to the first node of a stack
* @counter: line counter number
*
* Return: void
*/
void function_nop(stack_t **head, unsigned int counter)
{
        (void) counter;
        (void) head;
}

/**
* function_pop - the top of the stack is removed by this function.
* @head: pointer to the first node of the stack
* @counter: line counter number
*
* Return: void
*/
void function_pop(stack_t **head, unsigned int counter)
{
        stack_t *ptr;

        if (*head == NULL)
        {
                fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
                fclose(bus.box);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
	ptr = *head;
        *head = ptr->next;
        free(ptr);
}
