#include "monty.h"

/**
 *
 *
 *
 */

void add(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if(!head || !*head)
	{
		fprintf(stderr, "L%i: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = (*head)->next;
	(*head)->n += temp->n;
	free(temp);
}
