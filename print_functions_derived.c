#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_unsignedToBinary - prints an integer
 * @arg: argument: 0.
 * Return: 0.
 */
int print_unsignedToBinary(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int printed;

	print_binary(n, &printed);

	return (printed);
}
/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}
/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @list: List of all the arguments passed to the program
 * Return: Number of symbols printed to stdout
 */
int print_octal(va_list arg)
{
	unsigned int num;
	int len;
	char *octal_rep;
	char *rev_str;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		num = num / 8;

	}
	octal_rep[len] = '\0';
	rev_str = rev_string(octal_rep);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}
/**
 * print_unsignedIntToHex - prints unsigned int to hexadecimal
 * @num: number to print
 * @_case: letter 'a' on the case to print it (upper or lower)
 * Return: number or char printed
 */
int print_unsignedIntToHex(unsigned int num, char _case)
{
	unsigned int num2;
	int i, j, remainder, nbrCharacters = 0;
	char *numhex;

	for (num2 = num; num2 != 0; nbrCharacters++, num2 /= 16)
		;
	numhex = malloc(nbrCharacters);
	for (i = 0; num != 0; i++)
	{
		remainder = num % 16;
		if (remainder < 10)
			numhex[i] = remainder + '0';
		else
			numhex[i] = remainder - 10 + _case;
		num = num / 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(numhex[j]);
	free(numhex);
	return (nbrCharacters);
}

