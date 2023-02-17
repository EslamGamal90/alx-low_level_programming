#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i+1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((j % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
			continue;
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
