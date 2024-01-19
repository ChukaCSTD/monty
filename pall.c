#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *pl;
	(void)counter;

	pl = *head;
	if (pl == NULL)
		return;

	while (pl)
	{
		printf("%d\n", pl->n);
		pl = pl->next;
	}
}
