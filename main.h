#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

/**
 * struct print - This structure handles the
 * format specifiers and the corresponding function.
 * @t: type to print (format specifier)
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;


int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);


#endif /* _MAIN_H */
