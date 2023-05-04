#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *buffer, int size)
{
    if (size <= 0)
    {
        printf("\n");
        return;
    }
    int i, j;
    unsigned char *buf = (unsigned char*)buffer;
    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);
        for (j = 0; j < 10; j++)
{
            if (i+j < size)
                printf("%02x ", buf[i+j]);
            else
                printf("   ");
        }
        printf(" ");
        for (j = 0; j < 10; j++)
{
            if (i+j < size)
    {
                unsigned char c = buf[i+j];
                if (c >= 32 && c <= 126)
                    printf("%c", c);
                else
                    printf(".");
            }
            else
    {
                printf(" ");
            }
        }
        printf("\n");
    }
}
