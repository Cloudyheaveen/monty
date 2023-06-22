#include "monty.h"

/**
* f_pall - Function prints all the elements in the stack
* @head: Pointer to the stack
* @counter: Unused line count
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

/**
* f_swap - Function swaps the top two elements of the stack
* @head: Head of stack
* @counter: Line count
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int a = 0, b;

	h = *head;
	while (h)
	{
		h = h->next;
		a++;
	}
	if (a < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	b = h->n;
	h->n = h->next->n;
	h->next->n = b;
}
