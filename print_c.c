#include "main.h"
#include <stdarg.h>

/**
 * print_c - This function prints out a character
 * and is linked to _prinf.c file through structure
 * @c: character to print from va_list object
 * Return: 1 i.e success
 */
int print_c(va_list c)
{
	char print_char = (char)va_arg(c, int);

	_putchar(print_char);
	return (1);
}
