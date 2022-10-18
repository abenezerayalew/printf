#include "main.h"
/**
 * finder - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @selects: A list of all the posible functions.
 * @args: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int finder(const char *format, select_p selects[], va_list args)
{
int i, j, r_val, printnum = 0;
for (i = 0; format[i] != '\0'; i++)
if (format[i] == '%')
{
for (j = 0; selects[j].select != NULL; j++)
{
if (format[i + 1] == selects[j].select[0])
{
r_val = selects[j].foo(args);
if (r_val == -1)
return (-1);
printnum += r_val;
break;
}
}
if (selects[j].select == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
printnum +=  2;
}
else
return (-1);
}
i++;
}
else
{
_putchar(format[i]);
printnum++;
}
return (printnum);
}
