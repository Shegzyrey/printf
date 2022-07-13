#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct check - functions to check for formats
 * @type: the format to print
 * @f: the print fuction to use
 */

typedef struct check
{
    char *type
    int (*f)(va_list);
    check_n;
}

int _printf(const char *format, ...);
int engine(const char *format, check_n *arr_print, va-list argspec);
int putchar(char c);
int print_char(va_list);
int print_percent(va_list);
int print_binary(va_list);

/*help*/

unsigned int base_len(unsigned int, int);
int print_unsigned_number(unsigned int);
