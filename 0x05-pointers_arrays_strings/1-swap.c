#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 *
 * @a: This is the entry
 * @b: This is the entry
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
