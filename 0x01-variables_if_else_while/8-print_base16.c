#include<stdio.h>
/**
 * main - Prints numbers 0 to 9 and letters a to f
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
        int i;

        for(i = 0; i < 16; i++) 
       
        {
                putchar(i + '0'); 
        } 

        for (i = 97; i < 103; i++)
        {
                putchar(i)

        }  
        putchar('\n');  
        return 0;
}
