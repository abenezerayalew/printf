#include "main.h"

/**
 * print_binary - function that prints the binry representation of a number
 * @n: number to be printed in binary
 * @printed: printed
 * Return: hold number of characters printed
 */
void print_binary(unsigned int n, unsigned int *printed)
{
	if (n > 1)
	{
		*printed += 1;
		print_binary(n >> 1, printed);
	}
	_putchar((n & 1) + '0');
}
