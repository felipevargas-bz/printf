#include "holberton.h"

/**
 * get_format_function - Get the format function object
 *
 * @identifier: identify the caracter format
 * Return: NULL.
 */

int (*get_format_function(const char *identifier))(va_list)
{
	int i = 0;

	for_mt array[] =	{
		{"c", print_char},
		{"s", print_string},
		{"%", print_porcent},
		{"i", print_number},
		{"d", print_number},
		{NULL, NULL},
	};

	while (array[i].ident != NULL)
	{
		if (*(array[i].ident) == *identifier)
		{
			return (array[i].pt_func);
		}
		i++;
	}

	return (NULL);
}

/**
 * _printf - principal function of printf
 *
 * @format: a pointer to get all the caracters trough input
 * ... - all agurments passed trough variadic function
 * Return: number of caracters.
 */
int _printf(const char *format, ...)
{
	int retractor = 0;
	int (*pt_func)(va_list);
	va_list argument_list;
	va_start(argument_list, format);
	while (format && *format)
	{
		if (*format == '%')
		{
			pt_func = get_format_function(++format);
			if (pt_func)
			{
				retractor += pt_func(argument_list);
			}
			else
			{
				write(1, format - 1, 1);
				retractor++;
				write(1, format, 1);
				retractor++;
			}
			if (*format != '%')
			{
				format++;
			}
		}
		if (*format != '%')
		{
			write(1, format, 1);
			retractor++;
		}
		format++;
	}
	va_end(argument_list);
	return (retractor);
}
