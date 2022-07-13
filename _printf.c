#include "main.h"

/**
 * print_number - returns the number sent to this to the function
 * @integ: list of argument
 *
 * Return: returns the number of arguments
 */

int print_number(va_list integ)
{
	int a;
	int div;
	int len;
	unsigned int num;

	a = va_arg(integ, int);

	div = 1;
	len = 0;
	if (a < 0)
	{
		len += _putchar('-');
		num = a * -1;
	}
	else
		num = a;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
/**
 * engine - used to manipulate the provided stings and characters
 * @format: contain source characters provided
 * @fun_list: functions list
 * @argspec: arguments passed to the programme
 *
 * Return: returns count of printed characters
 */

int engine(const char *format, check_n fun_list[], va_list argspec)
{
	int i, j, ret_val;
	int print_char = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; fun_list[j].type != NULL; j++)
			{
				if (format[i + 1] == fun_list[j].type[0])
				{
					ret_val = fun_list[j].f(argspec);
					if (ret_val == -1)
						return (-1);
					print_char += ret_val;
					break;
				}
			}
			if (fun_list[j].type == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					print_char = print_char + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			print_char++;
		}
	}
	return (print_char);
}
/**
 * _printf - immitate printf function
 * @format: characters to be passed
 *
 * Return: characters to be printed
 */

int _printf(const char *format, ...)
{
	va_list argspec;
	int printed_chars;
	check_n fun_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integ},
		{"i", print_integ},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(argspec, format);
	printed_chars = engine(format, fun_list, argspec);
	va_end(argspec);
	return (printed_chars);
}

