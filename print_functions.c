#include "main.h"
/**
*prente_c - prints characters
*@args: arguments
*Return: number of print
*/
int prente_c(va_list args)
{
_putchar(va_arg(args, int));
return (1);
}
/**
*prente_s - prints string
*@args: arguments
*Return: number of print
*/
int prente_s(va_list args)
{
int i = 0;
char *p;
p = va_arg(args, char *);
if (p == NULL)
p = "(null)";
for (i = 0; p[i] != '\0'; i++)
_putchar(p[i]);
return (i);
}
/**
*prente_p - prints %
*@args: arguments
*Return: number of print
*/
int prente_p(__attribute__((unused)) va_list args)
{
_putchar('%');
return (1);
}

/**
 *prente_d - prints decimal
 *@args: arguments
 *Return: number of print
 */
int prente_d(va_list args)
{
int a[10];
int j, m, n, sum, count;
n = va_arg(args, int);
count = 0;
m = 1000000000;
a[0] = n / m;
for (j = 1; j < 10; j++)
{
m /= 10;
a[j] = (n / m) % 10;
}
if (n < 0)
{
_putchar('-');
count++;
for (j = 0; j < 10; j++)
a[j] *= -1;
}
for (j = 0, sum = 0; j < 10; j++)
{
sum += a[j];
if (sum != 0 || j == 9)
{
_putchar('0' + a[j]);
count++;
}
}
return (count);
}
