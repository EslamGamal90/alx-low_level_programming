#include "main.h"
#include <stdio.h>
/**
 * puts2 - This fuction print a string reverser
 *
 * @str: this is the pointer that point to a string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		{
		_putchar(str[i]);
		}
		_putchar('\n');
}
