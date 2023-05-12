#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all the arguments a program receives.
 *
 *@argc: number of arguments
 *
 *@argv: array of arguments.
 *
 *Return: Always (0) success.
 */

int main(int argc, char *argv[])
{
1-args.c int n;

1-args.c for (n = 0; n < argc; n++)
1-args.c {
1-args.c 1-args.c printf("%s\n", argv[n]);
1-args.c }
1-args.c return (0);
}
