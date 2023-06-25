#include "main.h"
#include <unistd.h>

/**
 * _putchar - print char
 * @c: char to print
 * Return: 1
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - puts function
 * @s: string to print
 * Return: length of string
 */

int _puts(const char *s)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
