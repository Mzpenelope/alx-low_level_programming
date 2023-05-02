#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array name
 * @n: is the number of elements in the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int k;
for (k = 0; k < n; k++)
{
printf("%d", a[k]);
}
if (k != n - 1)
{
printf(", ");
}
printf(10);
}
