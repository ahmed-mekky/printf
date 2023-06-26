#include "main.h"

/**
 * print_c - print char
 * @c: char to print
 * Return: 1
 */

int print_c(char c)
{
	if (!c)
	{
		c = '\0';
	}
	return (_putchar(c));
}

/**
 * print_s - print a string
 * @s: string to print
 * Return: length of string
 */

int print_s(char *s)
{
	if (!s)
	{
		s = "(null)";
	}
	return (_puts(s));
}
/**
 * print_d - print a decimal
 * @s: int to print
 * Return: length of int
 */
int print_d(int s)
{
	if (!s)
	{
		s = '\0';
	}
	return(_puts(s));
}
