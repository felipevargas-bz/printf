#include "holberton.h"
/**
 * print_char - print a char
 * @argument_list: character to print.
 * Return: size of the char
 */
int print_char(va_list argument_list)
{
	int character = (char)va_arg(argument_list, int);

	if (character == 0)
	{
		return (1);
	}
	if (character != 0)
	{
		write(1, &character, 1);

		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * print_string - print a string.
 * @string: string to print.
 * Return: size of string.
 */
int print_string(va_list string)
{
	char *str = va_arg(string, char *);

	if (str && *str)
	{
		int count = strlen(str);

		write(1, str, count);

		return (count);
	}
	if (str == NULL)
	{
		write(1, "(null)", 6);

		return (6);
	}
	else
	{
		return (0);
	}
}
/**
 * print_porcent - prints decimal numbers
 * @argument_list: name of the items in the va_list
 * Return: size of int
 */
int print_porcent(va_list argument_list)
{
	(void)argument_list;

	write(1, "%", 1);

	return (1);
}
