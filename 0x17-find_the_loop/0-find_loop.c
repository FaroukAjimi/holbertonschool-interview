#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - find the loop
 *@head: head of linkedlist
 * Return: loop.
 */
listint_t *find_listint_loop(listint_t  *head)
{
listint_t *f;
listint_t *s;

if (!head || !head->next)
return (NULL);
f = head->next->next;
s = head->next;

while (f && f->next && f != s)
{
s = s->next;
f = f->next->next;
}
if (s != f)
return (NULL);

s = head;

while (s != f)
{
s = s->next;
f = f->next;
}
return (s);
}
