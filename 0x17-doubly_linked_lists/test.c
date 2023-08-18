#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t linked list.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted (starting from 0).
 * @n: Value to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    dlistint_t *new_node, *temp;
    unsigned int count = 0;

    if (h == NULL) {
        return NULL;
    }

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->n = n;

    if (idx == 0) {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h != NULL) {
            (*h)->prev = new_node;
        }
        *h = new_node;
        return new_node;
    }

    temp = *h;
    while (temp != NULL) {
        if (count == idx - 1) {
            new_node->next = temp->next;
            new_node->prev = temp;
            if (temp->next != NULL) {
                temp->next->prev = new_node;
            }
            temp->next = new_node;
            return new_node;
        }
        temp = temp->next;
        count++;
    }

    free(new_node);
    return NULL; // If idx is out of bounds
}
