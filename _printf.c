#include "main.h"
#include <stdarg.h>

/**
 * _printf - printf function
 * @placeholder: placeholder :)
 * Return: number of chars printed.
 */

int _printf(const char *placeholder, ...)
{
	va_list ap;
	int i, n = 0, t = 0;

	while (placeholder[n])
		n++;
	va_start(ap, placeholder);
	for (i = 0; i < n; i++)
	{
		if (placeholder[i] == '%')
		{
			i++;
			switch (placeholder[i])
			{
			case 'c':
				t += print_c((int)va_arg(ap, int));
				break;
			case 's':
				t += print_s(va_arg(ap, char *));
				break;
			case '%':
				t += print_ps();
				break;
			}
		}
		else
		{
			_putchar(placeholder[i]);
		}
	}
	va_end(ap);
	return (t);
}

