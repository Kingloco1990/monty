#include "monty.h"

/**
 * usage_error - Prints usage error message.
 *
 * Return: EXIT_FAILURE.
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * malloc_error - Prints malloc error message.
 *
 * Return: EXIT_FAILURE.
 */
int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - Prints file opening error message.
 * @filename: Name of file that won't open.
 *
 * Return: EXIT_FAILURE.
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * unknown_op_error - Prints unknown instruction error message.
 * @opcode: Opcode where error occurred.
 * @line_number: Line number in Monty bytecodes file where error occured.
 *
 * Return: EXIT_FAILURE.
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * not_int_error - Prints invalid monty_push argument error message.
 * @line_number: Line number in Monty bytecodes file where error occurred.
 *
 * Return: EXIT_FAILURE.
 */
int not_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
