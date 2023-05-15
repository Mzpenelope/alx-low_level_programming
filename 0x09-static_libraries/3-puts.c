#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void _puts(char *s)
{
    puts(s);
=======

/**
 * _puts - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
>>>>>>> origin/master
}
