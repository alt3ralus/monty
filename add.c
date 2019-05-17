#include "monty.h"

/**
 * add - function to add the two
 * @head: header of the file
 * @line_number: line of the file
 */

void add(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (!head || !*head)
	{
		fprintf(stderr, "L%i: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = (*head)->next;
	(*head)->n += temp->n;
	free(temp);
}
