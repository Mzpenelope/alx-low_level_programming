#include<stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
	int n, m;

	for (n = 68; n <= 76; n++)
	{
		for (m = 69; m <= 77; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 76 || m != 77)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
        putchar('\n');
	return (0);
}
