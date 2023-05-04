#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337.
 * @s: pointer to the string to be encoded.
 * Return: pointer to the resulting string.
 */
char *leet(char *s)
{
    char leet_chars[] = {a, A, e, E, o, O, t, T, l, L};
    char leet_nums[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
    int i, j;
    for (i = 0; s[i] != 0; i++)
    {
        for (j = 0; j < 10; j++)
{
            if (s[i] == leet_chars[j]) 
    {
                s[i] = leet_nums[j];
                break;  // exit inner loop to save iterations
            }
        }
    }
    return (s);
}
