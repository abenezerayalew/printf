#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
int prente_xx(unsigned long int num);
int print_hex(unsigned int n, unsigned int c);
int _printf(const char *format, ...);
int prente_rot(va_list args);
int prente_c(va_list args);
int prente_s(va_list args);
int prente_p(va_list args);
int prente_po(va_list args);
int _putchar(char c);
int prente_r(va_list args);
int prente_b(va_list args);
int prente_d(va_list args);
int prente_i(va_list args);
int prente_x(va_list args);
int prente_S(va_list args);
int s(char c);
int prente_X(va_list args);
int prente_o(va_list args);
int prente_u(va_list args);
/**
 *struct select - match the conversion specifiers for printf
 *@select: type char pointer of the specifier
 *@foo: type pointer to function for the conversion specifier
 *
 */
typedef struct select
{
char *select;
int (*foo)(va_list args);
} select_p;
int finder(const char *format, select_p selects[], va_list args);
#endif
