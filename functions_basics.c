#include "holberton.h"
/**
 * print_char - print a char.
 * @character: character to print.
 * Return: size of the char.
 */
int print_char(va_list character)
{
	int b = (char)va_arg(character, int);

	if (b != 0)
	{
		write(1, &b, 1);

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
	else
	{
		write(1, "(null)", 6);

		return (6);
	}
}
/**
 * print_porcent - prints decimal numbers
 * @argument: name of the items in the va_list
 * Return: size of int
 */
int print_porcent(va_list argument)
{
	(void)argument;

	write(1, "%", 1);

	return (1);
}
