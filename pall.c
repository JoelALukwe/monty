#include "monty.h"
/**
 * f_pall - this is what will print the required stack
 * @kichwa: this is the stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **kichwa, unsigned int counter)
{
	stack_t *k;
	(void)counter;

	k = *kichwa;
	if (k == NULL)
		return;
	while (k)
	{
		printf("%d\n", k->n);
		k = k->next;
	}
}
