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
	int a, b, s;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b < '9'; b++)
		{
			for (s = b + 1; s <= '9'; s++)
			{
				if (a != b && b != s)
				{
				putchar(a);
				putchar(b);
				putchar(s);
				if (a == '7' && b == '8' && s == '9')
				continue;
				putchar(44);
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
