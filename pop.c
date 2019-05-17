#include "monty.h"

/**
 *
 *
 *
 */

void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	if (!head)
	{
		fprintf(stderr,"L%i: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
