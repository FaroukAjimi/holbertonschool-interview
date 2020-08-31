#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * lent - length of the linked list
 * @head: head of the linked list
 * Return: length of the linked list
 */
int lent(listint_t *head)
{
listint_t *p = head;
int ct = 1;

while (p->next != NULL)
{
ct = ct + 1;
p = p->next;
}
return (ct);
}

/**
 * is_palindrome - Check if palindrome
 * @head: head of the linked list
 * Return: if 1 not if 0 yes
 */
int is_palindrome(listint_t **head)
{
listint_t *p = *head;
int *list = malloc((lent(*head) / 2) * sizeof(int));
int ct = 0;
int i;

if (!(*head))
return (1);
while (ct != lent(*head) / 2)
{
list[ct] = p->n;
p = p->next;
ct++;
}

if (lent(*head) % 2 != 0)
p = p->next;
for (i = (lent(*head) / 2) - 1 ; i != -1; i--)
{
if (p->n != list[i])
{
free(list);
return (0);
}
p = p->next;
}
free(list);
return (1);
}
