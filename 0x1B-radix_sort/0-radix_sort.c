#include <stdio.h>
#include "sort.h"
#include <stdlib.h>
/**
 * max - biggest element in array
 * @array: arry to seach
 * @size:  size of array
 * Return: max
 **/
int max(int *array, size_t size)
{
unsigned int i;
int y;
int n = 0;
int max = 0;

for (i = 0; i < size; i++)
{
n = array[i];
for (y = 0; n; y++)
n = n / 10;
if (y > max)
max = y;
}
return (max);
}

/**
 * radix_sort - sorts an array of integers in ascending
 * order using the Radix sort algorithm
 * @array: Array to sort
 * @size: size of the array
 **/
void radix_sort(int *array, size_t size)
{
int *places[9];
int sort[9];
int m;
int tmp = 0;
int f = 0;
int b = 0;
int sf = 0;
int count = 0;
unsigned int i = 0;

if (size < 2)
return;
m = max(array, size);
for (f = 0; f < m; f++)
{
for (i = 0; i <= 9; i++)
{
sort[i] = 0;
places[i] = (int *)malloc(sizeof(int) * 1024);
places[i][0] = -1;
}
for (i = 0; i != size; i++)
{
tmp = array[i];
for (b = 0; b < f; b++)
tmp = tmp / 10;
sf = tmp % 10;
places[sf][sort[sf]] = array[i], sort[sf] += 1;
}
for (i = 0, count = 0; i <= 9; i++)
for (b = 0; b < sort[i] && places[i][0] != -1; b++, count++)
{
array[count] = places[i][b];
}
for (i = 0; i <= 9; i++)
free(places[i]);
print_array(array, size);
}
}
