/**
 *prente_o - prints in oct format
 *@args: argumenrs
 *Return: print numbers
 */
int prente_o(va_list args)
{
  unsigned int a[11];
  unsigned int i, m, n, sum;
  int count;
  n = va_arg(args, unsigned int);
  m = 1073741824;
  a[0] = n / m;
  for (i = 1; i < 11; i++)
    {
      m /= 8;
      a[i] = (n / m) % 8;
    }
  for (i = 0, sum = 0, count = 0; i < 11; i++)
    {
      sum += a[i];
      if (sum || i == 10)
	{
	  _putchar('0' + a[i]);
	  count++;
	}
    }
  return (count);
}
/**
 *prente_u - prints in oct format
 *@args: argumenrs
 *Return: print numbers
 */
int prente_u(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int num, last = n % 10, digit, exp = 1;
int  i = 1;
if (n == 0)
{
_putchar(48);
 return (1);
 }
n = n / 10;
num = n;
if (last < 0)
{
_putchar('-');
num = -num;
n = -n;
last = -last;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}
num = n;
while (exp > 0)
{
digit = num / exp;
_putchar(digit + '0');
num -= (digit * exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
