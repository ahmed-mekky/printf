#include "main.h"
#include <unistd.h>

int _putchar(int c)
{
	return(write(1, &c, 1));
}

int _puts(const char *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
