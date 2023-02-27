#include <stdio.h>

/**
 * print_rev - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 */

void rev_string(char *s)
{
	int i, x;
	char *c;
	char *z;

	for (i = 0; s[i] != '\0'; i++)
			{
			z[i] = s[i];
			_putchar(s[i]);
			}
			_putchar('\n');
	for (i = i - 1, x = 0 ; i >= 0 ; i--, x++)
		{
		c[x] = s[i];
		_putchar(s[i]);
		s[i] = z[x];
		}
		_putchar('\n');
}
