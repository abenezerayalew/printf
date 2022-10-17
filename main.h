#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);

/**
 * struct SpecifiersStruct - structure definition of a printTypeStruct
 * @con_Specifiers: conversion Specifiers
 * @printer: function to print
 */
typedef struct SpecifiersStruct
{
	char *con_Specifiers;
	int (*printer)(va_list);
} printTypeS;

#endif
