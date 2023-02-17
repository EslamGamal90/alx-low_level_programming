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
	int s;
	char b;

	for (s = '0'; s <= '9'; s++)
	putchar(s);

	for (b = 'a'; b <= 'f'; b++)
	putchar(b);
	putchar('\n');
	return (0);
}
