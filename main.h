#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

/**
 * struct print - This structure handles the format specifiers and the corresponding
 * function.
 * @t: type to print (format specifier)
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print;


int _printf(const char *format, ...);
int _putchar(char c);
