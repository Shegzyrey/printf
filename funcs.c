#include "main.h"

/**
 * print_char - funct to returb char
 * @character: character given
 *
 * Return: count of char returned
 */

int print_char(va_list character)
{
	return (_putchar(va_arg(character, int)));
}

/**
 * print_string -function to return string
 * @string: list of arguments
 *
 * Return: retuns number of character
 */

int print_string(va_list string)
{
	int i;
	char *str;

	str = va_arg(string, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - return the percent symbol
 * @list: list of arguments
 *
 * Return: returns the number of characters
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_integ - with base 10
 * @list: list of arguments
 *
 * Return: returnsthe number of chaarcters
 */
int print_integ(va_list list)
{
	int number;

	number = print_number(list);
	return (number);
}

