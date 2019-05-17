#include "monty.h"
/**
 * nop - A function that doesn’t do anything
 * @head: header of the list
 * @line_number: line number
 * Return: Void.
 */
void nop(stack_t **head, unsigned int line_number)
{
	(void)*head;
	(void)line_number;
}
