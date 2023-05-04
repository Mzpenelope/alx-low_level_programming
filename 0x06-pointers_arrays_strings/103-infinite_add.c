#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * Return: address of r or 0 if the result cannot fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, len1, len2, carry = 0;
for (len1 = 0; n1[len1]; len1++)
;
for (len2 = 0; n2[len2]; len2++)
;
if (len1 + len2 >= size_r)
return (0);
for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
{
int digit1 = (i >= 0) ? n1[i] - 0 : 0;
int digit2 = (j >= 0) ? n2[j] - 0 : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[k] = (sum % 10) + 0;
}
for (i = 0, j = k - 1; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}
r[k] = 0;
return (r);
}
