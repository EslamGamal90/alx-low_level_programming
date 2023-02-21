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
_putchar(c);
c++;
}
_putchar('\n');
}
