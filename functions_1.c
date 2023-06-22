#include "monty.h"
/**
* function_sub - top Node subtraction function
* @head: pointer to the head of the stack
* @counter: line counter number
*
* Return: void
*/
void function_sub(stack_t **head, unsigned int counter)
{
        stack_t *ptr;
        int sub_value, numd = 0;

        ptr = *head;
        for (; ptr != NULL; numd++)
        {
                ptr = ptr->next;
        }
        if (numd < 2)
        {
                fprintf(stderr, "L%d: can't sub_value, stack too short\n", counter);
                fclose(bus.file);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
        ptr = *head;
        sub_value = ptr->next->n - ptr->n;
        ptr->next->n = sub_value;
        *head = ptr->next;
        free(ptr);
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
        stack_t *ptr;
        int len = 0, mod_value;

        ptr = *head;
        for (len = 0; ptr != NULL; len++)
        {
                ptr = ptr->next;
        }

        if (len < 2)
        {
                fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
                fclose(bus.file);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
        ptr = *head;
        if (ptr->n == 0)
        {
                fprintf(stderr, "L%d: division by zero\n", counter);
                fclose(bus.file);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
        mod_value = ptr->next->n % ptr->n;
        ptr->next->n = mod_value;
        *head = ptr->next;
        free(ptr);
}

/**
* function_sum - function that sums the stack's top two items
* @head: pointer to the pointer to the head of the stack
* @counter: line counter number
*
* Return: void
*/
void function_sum(stack_t **head, unsigned int counter)
{
        stack_t *ptr;
        int len, sum_value;

        ptr = *head;

        for (len = 0; ptr; len++)
        {
                ptr = ptr->next;
        }

        if (len < 2)
        {
                fprintf(stderr, "L%d: can't add, stack too short\n", counter);
                fclose(bus.file);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
        ptr = *head;
        sum_value = ptr->n + ptr->next->n;
        ptr->next->n = sum_value;
        *head = ptr->next;
        free(ptr);
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
        stack_t *ptr;
        int len, mul_value;

        ptr = *head;

        for (len = 0; ptr != NULL; len++)
        {
                ptr = ptr->next;
        }

        if (!(len >= 2))
        {
                fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
                fclose(bus.file);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
        ptr = *head;
        mul_value = ptr->next->n * ptr->n;
        ptr->next->n = mul_value;
        *head = ptr->next;
        free(ptr);
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
        stack_t *ptr;
        int len, div_result;

        ptr = *head;
        for (len = 0; ptr != NULL; len++)
        {
                ptr = ptr->next;
        }

        if (!(len >= 2))
        {
                fprintf(stderr, "L%d: can't div, stack too short\n", counter);
                fclose(bus.file);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
        ptr = *head;
        if (ptr->n == 0)
        {
                fprintf(stderr, "L%d: division by zero\n", counter);
                fclose(bus.file);
                free(bus.item);
                free_the_stack(*head);
                exit(EXIT_FAILURE);
        }
        div_result = ptr->next->n / ptr->n;
        ptr->next->n = div_result;
        *head = ptr->next;
        free(ptr);
}
