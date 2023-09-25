#include "lists.h"

/**
 * print-listint- print a linked list
 * @h: pointer
 * Return : number of nodes
 *
 */
size_t print_listint(const listint_t *h);
{
      size_t u = 0;

      while (h! = NULL)
      {
	      printf("%d\n", h->n);
              h = h->next;
	      u++;
      }
      return (u);
 
}
