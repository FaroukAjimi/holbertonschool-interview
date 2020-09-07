#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *check_cycle - Function name
 *@list: goo
 *Return: gpp
 */
int check_cycle(listint_t *list)
{
listint_t *fast = list;
listint_t *slow = list;

while ("oo")
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
return (1);
if (fast == NULL)
return (0);
}
}
