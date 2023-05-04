#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_ptr = dest;
    while (*dest_ptr != 0)
    {
        dest_ptr++;
    }
    for (int i = 0; i < n && *src != 0; i++)
    {
        *dest_ptr++ = *src++;
    }
    *dest_ptr = 0;
    return (dest);
}
