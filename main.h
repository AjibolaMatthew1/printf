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
int _putcharacter(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
static unsigned long _pow(unsigned int base, unsigned int exponent);

#endif /* _MAIN_H */
