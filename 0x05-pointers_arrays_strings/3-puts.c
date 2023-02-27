#include "main.h"
#include <stdio.h>

/**
 * _puts - Function that returns the length of a string
 *stdout.
 * @str: this is the input string
 *
 * 
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		{
		_putchar(str[i]);
		}
		_putchar('\n');
}
