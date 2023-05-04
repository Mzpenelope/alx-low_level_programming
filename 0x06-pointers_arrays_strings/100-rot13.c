#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *str)
{
    const char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char *pos = strchr(alpha, str[i]);
        if (pos != NULL) 
{
            str[i] = rot13[pos - alpha];
        }
    }
    return (str);
}
