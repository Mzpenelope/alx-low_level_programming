#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
    return memcpy(dest, src, n);
=======
/**
 * _memcpy - fills memory with another buffer.
 * @dest: source string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
>>>>>>> origin/master
}
