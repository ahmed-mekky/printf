#include "main.h"
#include <stdlib.h>
#include <limits.h>
int print_INTMIN(void);

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
 * @d: int to print
 * Return: length of int
 */
int print_d(int d)
{
	char *str;
	int i = 0, len = 0, size = 0, flag = 0, copy = abs(d);

	if (d == INT_MIN)
		return (print_INTMIN());
	if (d == 0)
	{
		_putchar('0');
		return (1);
	}
	while (copy)
	{
		size++;
		copy /= 10;
	}
	if (d < 0)
	{
		str = malloc(sizeof(char) * size + 2);
		flag = 1;
	}
	else
		str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
	{
		error = -1;
		return (-1);
	}
	while (d)
	{
		str[i++] = (abs(d) % 10) + '0';
		d /= 10;
	}
	if (flag == 1)
		str[i++] = '-';
	str[i] = '\0';
	while (i > 0)
	{
		len += _putchar(str[--i]);
	}
	free(str);
	return (len);
}

/**
 * print_INTMIN - prints INT_MIN
 *
 * Return: lentgh of INT_MIN
 */
int print_INTMIN(void)
{
	char *str = "-2147483648";

	return (_puts(str));
}
