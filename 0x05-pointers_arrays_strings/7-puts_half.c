#include <stdio.h>
/**
 * puts_half - This fuction print a string reverser
 *
 *@str: this is the pointer that point to a string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		{
	if (i % 2 != 0)
		{
		_putchar(str[i]);
		}
		}
		_putchar('\n');
}}
