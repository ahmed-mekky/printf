#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

extern int error;

int _printf(const char *format, ...);
int _putchar(int c);
int _puts(const char *s);
int print_c(char c);
int print_s(char *s);
int _switcher(char c,  va_list ap);
int print_d(int s);


#endif
