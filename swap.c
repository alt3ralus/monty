#include "monty.h"

/**
 * swap -  function to swap the data of the nodes
 * @head: head of the nodes
 * @line_number: line of the command
 */

void swap(stack_t **head, unsigned int line_number)
{
	stack_t *tail, *h;
	int temp = 0;
	char *msg = ": can't swap, stack too short";

	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%d%s\n", line_number, msg);
		free_dlistint(*head);
		exit(EXIT_FAILURE);
	}

	tail = *head;
	h = (*head)->next;

	temp = h->n;
	h->n = tail->n;
	tail->n = temp;
}
