#include "main.h"
#include <stdarg.h>
/**
 * _printf - printf function
 * @format: placeholder :)
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, n = 0, t = 0;

	if (!format)
		return (-1);

	while (format[n])
		n++;
	va_start(ap, format);
	while (i < n)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
			{
				switch (format[i])
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
				default:
					t += print_c('%');
					t += print_c(format[i]);
				}
			}
			else
				return (-1);
		}
		else
			t += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (t);
}
