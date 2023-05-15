#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isalpha(int c)
{
	return isalpha(c);
=======
/**
 *_isalpha - check for uppercase letters
 *@c: input.
 *
 *Return: 1 if c is uppercase
 * 0 if c is anyhting else.
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') ||
(c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
>>>>>>> origin/master
}
