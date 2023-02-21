#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
char c;
while (c != 'z')
{
_putchar('a');
c++;
}
_putchar('\n');
return (0);
}
