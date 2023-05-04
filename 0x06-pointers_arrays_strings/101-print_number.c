#include "main.h"
/**
 * print_number - prints an integer using _putchar
 * @num: the integer to be printed
 */
void print_number(int num)
{
    unsigned int abs_num;
    if (num < 0)
    {
        abs_num = (unsigned int)(-num);
        _putchar(-);
    } 
    else 
    {
        abs_num = (unsigned int)num;
    }
    if (abs_num / 10 != 0)
    {
        print_number((int)(abs_num / 10));
    }
    _putchar((char)((abs_num % 10) + 0));
}
