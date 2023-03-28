#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_s - function prints out as string and is
 * linked tp _printf.c file with a structure
 * @s: strng that is found in va_list object
 * Return: the numer of strings i
 */
int print_s(va_list s)
{
	int i = 0;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(NULL)";

	while (str[i])
		_putchar(str[i++]);

	return (i);
}
