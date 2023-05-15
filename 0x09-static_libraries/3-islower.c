#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
=======
/**
 *_islower - check for lower case letters
 *@c: input.
 *
 *Return: 1 if c is lowercase
 * 0 if c is anyhting else.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
>>>>>>> origin/master
}
