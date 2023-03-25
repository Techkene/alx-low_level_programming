#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * 
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *new, *search = *h;
        unsigned int i = 0;
        new = malloc(sizeof(dlist_t));
        if (!new)
                return (NULL);
        if (idx == 0)
        {
                new->n = n;
                new->next = (*h);
                new->prev = NULL;
                if ((*h) != NULL)
                        (*h)->prev = new;
                (*h) = new;
                return (new);
        }
        while (search)
        {
                if (i == idx -1)
                {
                        new-> = n;
                        new->next = search->next;
                        new->prev = search;
                        search->next = new;
                        if (new->next)
                                new->next->prev = new;
                        return (new);
                }
                search = search->next;
                i++;
        }
        free(new);
        return (NULL);
}
