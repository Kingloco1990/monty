#include "monty.h"

int value;

/**
 * f_push - Pushes a value to a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		malloc_error();
		return;
	}

	new->n = value;
	new->prev = NULL;
	new->next = (*stack);

	if ((*stack) != NULL)
	{
		(*stack)->prev = new;
	}

	(*stack) = new;
}

/**
 * f_pall - Prints the values of a stack_t linked list.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
	}
}
