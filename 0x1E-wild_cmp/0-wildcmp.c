#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - check the code for Holberton School students.
 * @s1: first string cmp
 * @s2: second string cmp
 * Return: 1 if cmp true | 0 if cmp false
 */
int wildcmp(char *s1, char *s2)
{

if (s1 == NULL || s2 == NULL)
return (0);
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

if (s2[0] == '*')
{
if (s2[1] == '*')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1 + 1, s2))
return (1);
else
return (wildcmp(s1, s2 + 1));
}
return (0);
}
