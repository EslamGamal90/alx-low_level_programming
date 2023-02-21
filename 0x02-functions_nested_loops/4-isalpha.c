#include "main.h"

/**
 * _isalpha - check for char alphabet
 *@c: is the char
 * Return: 1 if c is lowercase  or uppercase othewise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
