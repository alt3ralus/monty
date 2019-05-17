#include "monty.h"
/**
 * pint - Prints the first node.
 * @head: A pointer to the head of the list.
 * @n: global var.
 * Return: Void.
 */
void pint(stack_t **head, unsigned int n)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d:  can't pint, stack empty\n", n);
		exit(EXIT_FAILURE);
	}

		printf("%d", (*head)->n);

}
