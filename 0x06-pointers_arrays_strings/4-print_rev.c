#include "main.h"
/**
 * print_rev - prints a reverse string
 *
 * @s: input string
 */
void print_rev(char *s)
{
int index;
for (index = 0; s[index] != 0; index++)
;
for (index = index - 1; index >= 0; index--)
{
_putchar(s[index]);
}
_putchar(10);
}
