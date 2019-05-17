#include "monty.h"

/**
 * pop - delete the header of the list
 * @head: header of the file
 * @line_number: number of the line of the file
 * Return: void
 */

void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (!head || !*head)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
