#include "main.h"
/**
 * _printf - prints arguments
 * @format: A string of args
 * Return: total printed
 */
int _printf(const char *format, ...)
{
int printnum = 0;
va_list args;
select_p selects[] = {
{"s", prente_s}, {"c", prente_c}, {"%", prente_p},
{"b", prente_b}, {"d", prente_d}, {"i", prente_d},
{"x", prente_x}, {"X", prente_X}, {"o", prente_o},
{"u", prente_u}, {"p", prente_po}, {"r", prente_r},
{"R", prente_rot}, {"S", prente_S},
{NULL, NULL}
};
if (format == NULL)
return (-1);
va_start(args, format);
printnum = finder(format, selects, args);
va_end(args);
return (printnum);
}
