#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _strlen(char *s)
{
    return strlen(s);
=======

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
>>>>>>> origin/master
}
