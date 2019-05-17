#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

extern int number;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
int _execute(stack_t **head, char *token, int line_number);
int get_line(FILE *file);
int isNumeric(const char *str);
void (*get_function)(stack_t **stack, unsigned int line_number);
void push(stack_t **head, unsigned int n);
void pop(stack_t *head, unsigned int n);
void pall(stack_t **head, unsigned int n);
void pint(stack_t **head, unsigned int line_number);
void swap(stack_t *head, unsigned int n);
void add(stack_t *head, unsigned int n);
void nop(void);
void free_dlistint(stack_t *head);

#endif /* HOLBERTON_H */
