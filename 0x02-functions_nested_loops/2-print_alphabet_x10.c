#include "main.h"

/**
 *  print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
int x = 0;
char c = 'a';
while (x < 10)
{
	while (c != 'z')
	{
		_putchar(c);
		c++;
	}
		_putchar('\n');
	x++;
}
}
