#include "monty.h"

/**
 * add - function to add the two
 * @head: header of the file
 * @line_number: line of the file
 */

void add(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	char *msg = "can't add, stack too short";

	if (!head || !*head)
	{
		fprintf(stderr, "L%i: %s\n", line_number, msg);
		free_dlistint(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if ((*head)->next)
	{
		*head = (*head)->next;
		(*head)->n += temp->n;
	}
	free(temp);
}
