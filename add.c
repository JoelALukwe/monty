#include "monty.h"
/**
 * f_add - responsible for adding top most elements of the stack 
 * @kichwa: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **kichwa, unsigned int counter)
{
	stack_t *k;
	int len = 0, aux;

	k = *kichwa;
	while (k)
	{
		k = k->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*kichwa);
		exit(EXIT_FAILURE);
	}
	k = *kichwa;
	aux = k->n + k->next->n;
	k->next->n = aux;
	*kichwa = k->next;
	free(k);
}
