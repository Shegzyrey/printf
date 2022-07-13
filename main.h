#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
<<<<<<< HEAD
 * struct check - function to check for formats
 * @type: the format to print
 * @f: the print fuction to use
 */

typedef struct check
{
	char *type;
	int (*f)(va_list);
} check_n;

int _printf(const char *format, ...);
int engine(const char *format, check_n *arr_print, va_list argspec);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integ(va_list);
int print_number(va_list);
#endif
