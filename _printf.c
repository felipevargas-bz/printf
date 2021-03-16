#include "holberton.h"
/**
 * 
 * 
 */

void *get_format_function(const char *identifier)
{
	int i = 0;

	for_mt array[] = 
	{
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL},};

	while (array[i].ident != NULL)
	{
		if (*(array[i].ident) == *identifier)
		{
			return (array[i].ident);
		}
		i++;
	}
}

int _printf(const char *format,...)
{
	int retractor = 0;

	va_list argument_list;

	va_start(argument_list, format);

	void (*pt_func)(va_list, int *);

	while (format && *format)
	{
		if (*format == '%')
		{
			if (format[retractor + 1] == '%')
			{
				write(1, ++format, 1);
				continue;
			}

			pt_func = get_format_function(format = format + 1);

			if (pt_func)
			{
				pt_func (argument_list, &retractor);
			}
			format++;
			retractor++;
		}
		if (*format != '\0')
		{
			format++;
		}
		retractor++;
	}
	va_end(argument_list);

	return (retractor);
}
