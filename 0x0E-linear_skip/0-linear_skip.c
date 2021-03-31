#include <stdio.h>
#include <stdlib.h>
#include "search.h"

/**
 * linear_skip - Entry point
 * @list: head of skiplist
 * @value: value to search
 * Return: Always EXIT_SUCCESS
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
int  prev = 0;
skiplist_t *f = list;
 int check = 0;

if (!list)
return (NULL);
for (list = list->express; list; list = list->express)
{
check = 1;
printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
if (value >= prev && value <= list->n)
{
printf("Value found between indexes [%lu] and [%lu]\n", f->index, list->index);
for (; f->next; f = f->next)
{
printf("Value checked at index [%lu] = [%d]\n", f->index, f->n);
if (f->n == value)
return (f);
if(f == list)
  {
    check = 1;
    break;
  }
}
}
if (check == 1)
  continue;
if (!list->express)
{
for (; f->next; f = f->next)
{}
printf("Value found between indexes [%lu] and [%lu]\n", list->index, f->index);
for (; list; list = list->next)
{
printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
if (list->n == value)
return (list);
if (!list->next)
break;
}
}
prev = list->n;
f = list;
}
return (list);
}
