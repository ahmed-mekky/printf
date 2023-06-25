#include "main.h"

/**
 * print_c - print char
 * @c: char to print
 * Return: 1
 */

int print_c(char c)
{
	return (_putchar(c));
}

/**
 * print_s - print a string
 * @s: string to print
 * Return: length of string
 */

int print_s(char *s)
{
	return (_puts(s));
}

/**
 * print_ps - print a percent sign
 *
 * Return: 1
 */
int print_ps(void)
{
	return (_putchar('%'));
}
