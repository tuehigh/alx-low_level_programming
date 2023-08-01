#include"lists.h"

/**
 * print_listint - prints all valid elements of a linked list
 * @h: linked list of type listint_t to print
 * Return:number of present nodes
 */

size.t print_listint(const listint_t *h)
{
	size_t count = 0;
	while(h)
	{
		printf("%id\n",h->n);
		count++;
		h = h->next;
	}
	return (count);
}
