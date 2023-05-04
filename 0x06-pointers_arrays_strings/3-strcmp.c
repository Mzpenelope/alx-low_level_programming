#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compare two strings
 * @str1: First string to compare
 * @str2: Second string to compare
 * Return: An integer less than, equal to, or greater than zero if str1 is
 * less than, equal to, or greater than str2, respectively.
 */
int _strcmp(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != 0 && str2[i] != 0 && str1[i] == str2[i]) {
        i++;
    }
    if (str1[i] == 0 && str2[i] == 0) {
        return 0; // Both strings are equal
    }
    return (str1[i] - str2[i]);
}
