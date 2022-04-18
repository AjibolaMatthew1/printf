#include "main.h"

/**
 * print_c - prints a character
 * @c: character to be printed
 * Return: always 1
 */
int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
