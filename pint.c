#include "monty.h"
/**
 * pint - Prints the first node.
 * @head: A pointer to the head of the list.
 * @line_number: Data.
 * Return: Void.
 */
void pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d:  can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

		printf("%i\n", (*head)->n);

}
