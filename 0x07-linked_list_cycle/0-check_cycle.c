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

if (list == NULL)
return (0);
while (fast && slow && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
return (1);
}
return (0);
}
