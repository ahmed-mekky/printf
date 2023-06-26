#include "main.h"
#include <stdlib.h>

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
	int i = 0, len = 0, size = 0, flag = 0;
	int copy = abs(d);

	while (copy)
	{
		size++;
		copy /= 10;
	}
	if (size == 0)
		return (-1);

	if (d < 0)
	{
		str = malloc(sizeof(char) * size + 2);
		flag = 1;
	}
	else
		str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (-1);
	while (d)
	{
		str[i] = (abs(d) % 10) + '0';
		d /= 10;
		i++;
	}
	if (flag == 1)
		str[i++] = '-';
	str[i] = '\0';
	while (i > 0)
	{
		i--;
		len += _putchar(str[i]);
	}
	free(str);
	return (len);

}
