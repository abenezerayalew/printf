#include "main.h"
/**
 * prente_po - p.
 * @args: arguments of function.
 * Return: printed numbers.
 */
int prente_po(va_list args)
{
unsigned long int dec, buffr;
char c[100];
int count, n, i;
dec = (unsigned long int)va_arg(args, void*);
buffr = dec;
count = 1;
i = 0;
if (!dec)
{
n = _printf("(nil)");
return (n);
}
while (buffr)
{
buffr /= 16;
count++;
}
c[count + 1] = '\0';
while (dec > 0)
{
n = (dec % 16);
if (n >= 0 && n <= 9)
c[count] = ((char)(n + '0'));
else
c[count] = ((char)(n + 'W'));
count--;
dec /= 16;
}
c[0] = '0';
c[1] = 'x';
while (c[i] != '\0')
{
_putchar(c[i]);
i++;
}
return (i);
}
/**
 * prente_rot - prints a string in rot13
 * @args: list of arguments from _printf
 * Return: number of printed
*/
int prente_rot(va_list args)
{
register short i, j;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *s = va_arg(args, char *);
if (!s)
return (-1);
for (j = 0; s[j]; j++)
{
if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
_putchar(s[j]);
else
{
for (i = 0; i <= 52; i++)
if (s[j] == rot13[i])
_putchar(ROT13[i]);
}
}
return (j);
}
/**
*prente_r - prints in reverse
*@args: arguments
*Return: number of printed
*/
int prente_r(va_list args)
{
int i = 0, j;
char *s = va_arg(args, char *);
if (!s)
return (-1);
while (s[i])
i++;
for (j = i - 1; j >= 0; j--)
_putchar(s[j]);
return (i);
}
