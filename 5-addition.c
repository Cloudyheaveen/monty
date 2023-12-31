#include "monty.h"

/**
* addnode - Function that adds node to the head stack
* @head: Head of the stack
* @n: New value
*/
void addnode(stack_t **head, int n)
{
	stack_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
