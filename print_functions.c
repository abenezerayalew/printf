#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_char - writes the character c to stdout
 * @arg: argument
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_str - prints a string with a `s` (-lower case-) specifier
 * @arg: argument
 * Return: number of character printed
 */
int print_str(va_list arg)
{
int i;
char *str = va_arg(arg, char*);

if (str == NULL)
	str = "(null)";
else if (*str == '\0')
	return (-1);

for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);

return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list arg)
{
	int num_length;

	num_length = print_number(arg);
	return (num_length);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list arg)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}

/**
 * print_STR - prints a string with a 'S' (upper case) specifier
 * @arg: argument
 * Return: number of character printed
 */
int print_STR(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);
	for (i = 0; str[i]; i++)
	{
		if ((str[i] < 32 && str[i] > 0) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (i < 16)
				_putchar('0');
			print_unsignedIntToHex(str[i], 'A');
		}
		else
			_putchar(str[i]);
	}
	return (i);
}


























