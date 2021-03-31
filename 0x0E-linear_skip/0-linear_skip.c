#include <stdio.h>
#include <stdlib.h>

#include "search.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
  int  prev = 0;
  skiplist_t *f = list;
  
  if (!list)
    return(NULL);
  for(; list->express == NULL; list = list->express)
    {
      if (value >= prev && value <= list->n)
	{
	  printf("Value found between indexes [%lu] and [%lu]\n", f->index, list->index);
	  for(; f->next == list; f = f->next)
	    {
	      printf("Value checked at index [%lu] = [%d]\n", f->index, f->n);
	      if (f->n == value)
		  return(f);
	      return (NULL);
	    }
	}
      prev = list->n;
      if (value == prev)
	  printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
      printf("Value checked at index [%lu] = [%d]\n", list->index, prev);
      f = list;
    } 
  return(NULL);
}
