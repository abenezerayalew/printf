#include "main.h"
/**
 * s - prints a char's ascii value in uppercase hex
 * @c: char to print
 * Return: number of chars printed (always 2)
 */
int s(char c)
{
int count;
char diff = 'A' - ':';
char d[2];
d[0] = c / 16;
d[1] = c % 16;
for (count = 0; count < 2; count++)
{
if (d[count] >= 10)
_putchar('0' + diff + d[count]);
else
_putchar('0' + d[count]);
}
return (count);
}
/**
 * prente_S - prints a string and nonprintable character ascii values
 * @args: arguments
 * Return: number of chars printed
 */
int prente_S(va_list args)
{
unsigned int i;
int count = 0;
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
for (i = 0; str[i]; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
_putchar('\\');
_putchar('x');
count += 2;
count += s(str[i]);
}
else
{
_putchar(str[i]);
count++;
}
}
return (count);
}
