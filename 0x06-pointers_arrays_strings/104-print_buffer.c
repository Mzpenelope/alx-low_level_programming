#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *buffer, int size)
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
    int m, j;
    unsigned char *buf = (unsigned char*)buffer;
    for (m = 0; m < size; m += 10)
    {
        printf("%08x: ", m);
        for (j = 0; j < 10; j++)
{
            if (m+j < size)
                printf("%02x ", buf[m+j]);
            else
                printf("   ");
        }
        printf(" ");
        for (j = 0; j < 10; j++)
{
            if (m+j < size)
    {
                unsigned char c = buf[m+j];
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
