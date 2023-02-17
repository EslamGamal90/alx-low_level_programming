#include <time.h>
#include <stdio.h>
/**
 * main - Print if number is positive, Zero or negative
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a, b;

for (a = '0'; a < '9'; a++)
{
	for (b = a + 1; b <= '9'; b++)
		{
		if (a != b)
				{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
				continue;
				putchar(44);
				putchar(' ');
				}
		}
}
	putchar('\n');
	return (0);
}
