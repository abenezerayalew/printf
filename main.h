#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);
/*void print_binary(unsigned int n, unsigned int* printed);*/
/*---------*/
int print_binary(va_list);
int print_octal(va_list arg);
/*----------*/
int print_unsignedToBinary(va_list arg);
/*int print_oct(va_list arg);*/
int print_unsignedIntToHex(unsigned int num, char _case);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_STR (va_list arg);

/*Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
/**
 * struct SpecifiersStruct - structure definition of ai printTypeStruct
 * @con_Specifiers: conversion Specifiers
 * @printer: function to print
 */
typedef struct SpecifiersStruct
{
	char *con_Specifiers;
	int (*printer)(va_list);
} printTypeS;

#endif
