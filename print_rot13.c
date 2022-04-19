#include "main.h"
#include <stdlib.h>

/**
 * print_R - Prints a string in rot13
 * @R: String to print
 * Return: Number of chars printed
 */
int print_R(va_list R)
{
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	str = va_arg(R, char *);
}
