#include "main.h"
#include <stdio.h>
/**
_strcat - concatenate two strings
@dest: char string to concatenate to
@src: char string
Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*ptr != 0)
{
ptr++;
}
while (*src != 0)
{
*ptr = *src;
ptr++;
src++;
}
*ptr = 0;
return (dest);
}
