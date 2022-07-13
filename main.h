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
 * @f: Th print function to use
=======
 * struct check - functions to check for formats
 * @type: the format to print
 * @f: the print fuction to use
>>>>>>> 25065569c947b93cd66fdabbc69ccdfa25ce2252
 */

typedef struct check
{
<<<<<<< HEAD
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

#endif


=======
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
>>>>>>> 25065569c947b93cd66fdabbc69ccdfa25ce2252
