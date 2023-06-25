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
	int i, n = 0, t = 0;

	while (format[n])
		n++;
	va_start(ap, format);
	for (i = 0; i < n; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
<<<<<<< HEAD
=======
			{
			switch (format[i])
>>>>>>> 22d9a37fcf7bacfe1846676cae8c4a8506f4da99
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
				}
			}
			}
		}
		else
		{
			t += _putchar(format[i]);
		}
	}
	va_end(ap);
	return (t);
}
