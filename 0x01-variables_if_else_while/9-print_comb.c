#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print if number is positive, Zero or negative
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	if (a != '9')
	{
	putchar(44);
	putchar(' ');
	}
	else
	{}
	}
	putchar('\n');
	return (0);
}
