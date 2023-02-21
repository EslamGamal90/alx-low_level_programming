#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(x + '0');
		return (x);
	}
	else
	{
		nv = n % 10;
		_putchar(x + '0');
		return (x);
	}
}
