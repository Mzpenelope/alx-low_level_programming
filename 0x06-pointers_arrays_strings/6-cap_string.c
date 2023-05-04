#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 * Return: pointer to modified string
 */
char *cap_string(char *s)
{
    int i = 0;
    char separators[] = " \t\n,;.!?\"(){}";
    while (s[i] != 0)
    {
        if (s[i] >= a && s[i] <= z && (i == 0 || strchr(separators, s[i - 1]) != NULL)) 
{
            s[i] -= a - A;
}
        i++;
    }
    return (s);
}
