#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of `list_t` list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nel;

	nel = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nel++;
	}
	return (nel);
}
