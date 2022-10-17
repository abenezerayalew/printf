#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * printIdentifiers - prints special characters
 * @next: character after the %
 * @arg: argument for the con_Specifiers
 * Return: the number of characters printed
 */
int printIdentifiers(char next, va_list arg)
{
	int funIndex;

	printTypeS fun[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"b", print_unsignedToBinary},
		{"u", print_unsigned},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_STR},

		{NULL, NULL}
	};

	for (funIndex = 0; fun[funIndex].con_Specifiers != NULL; funIndex++)
	{
		if (fun[funIndex].con_Specifiers[0] == next)
			return (fun[funIndex].printer(arg));
	}
	return (0);
}

/**
 * _printf - mimic printf from stdio
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 *
 *  Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * return -1 for incomplete identifier error
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int identifierPrinted = 0, charPrinted = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1); /* error */
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charPrinted++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charPrinted++;
			i++;

			continue;
		}
		if (format[i + 1] == '\0')
			return (-1); /* error */
		identifierPrinted = printIdentifiers(format[i + 1], arg);
		if (identifierPrinted == -1 || identifierPrinted != 0)
			i++;
		if (identifierPrinted > 0)
			charPrinted += identifierPrinted;
		if (identifierPrinted == 0)
		{
			_putchar('%');
			charPrinted++;
		}
	}
	va_end(arg);
	return (charPrinted);
}
