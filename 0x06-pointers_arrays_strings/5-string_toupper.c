#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr != 0)
    {
        if (*ptr >= a && *ptr <= z)
        {
            *ptr = *ptr - 32;
        }
        ptr++;
    }
    return (str);
}
