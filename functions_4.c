#include "monty.h"
/**
* free_the_stack - this function frees the linked list, stack
* @head: pointer to the head of the stack
*
* Return: void
*/
void free_the_stack(stack_t *head)
{
        stack_t *ptr;

        ptr = head;
        for (; head; )
        {
                ptr = head->next;
                free(head);
                head = ptr;

        }
}

/**
* function_stack - prints the top of the stack
* @head: the head of the stack, linked list
* @counter: line counter number
*
* Return: void
*/
void function_stack(stack_t **head, unsigned int counter)
{
        (void)head;
        (void)counter;
        bus.lifi = 0;
}
/**
* function_pall - print out all the values of the stack
* @head: pointer to the first node of the stack
* @counter: line counter number
* Return: void
*/
void function_pall(stack_t **head, unsigned int counter)
{
        stack_t *ptr;
        (void) counter;

        ptr = *head;
        if (!ptr)
                return;
        for (; ptr != NULL; )
        {
                printf("%d\n", ptr->n);
                ptr = ptr->next;   
        }
}

/**
* function_swap - function that swaps the top two elements of the stack
* @head: head of stack
* @counter: counter for the line
*
* Return: void
*/
void function_swap(stack_t **head, unsigned int counter)
{
        stack_t *ptr;
        int len, temp_value;

        ptr = *head;

        for (len = 0; ptr != NULL; len++)
        {
                ptr = ptr->next;
        }

        if (len < 2)
        {
                fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
                fclose(bus.file);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
        ptr = *head;
        temp_value = ptr->n;
        ptr->n = ptr->next->n;
        ptr->next->n = temp_value;
}
