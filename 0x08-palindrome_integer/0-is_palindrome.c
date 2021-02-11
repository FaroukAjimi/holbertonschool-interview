#include <stdio.h>
#include "palindrome.h"
/**
 * is_palindrome - function
 * @n: input
 * Return - 0 pal 1 not pal
 */

int is_palindrome(unsigned long n)
{
 unsigned long rev = n, y;

 while(rev != 0)
 {
 y = rev % 10 + y*10;
 rev = rev / 10;  
 }
 if (y == n) {
 return(1);
 }
return(0);
}
