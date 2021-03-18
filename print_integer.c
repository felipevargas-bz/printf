#include "holberton.h"
/**
 * print_print_integer - function to print numbers
 * @integer: name of the items passed trough va_list
 * Return: int
 */
int print_integer(va_list integer)
{
	int num = va_arg(integer, int);
	long digit = 1, powerful = 10, div = 10;
	long count = 0, printed = 0;
	unsigned int absolut = get_absolut(num);

	if (num < 0)
	{	write(1, "-", 1);
		count++;
	}
	if (absolut >= 10)
	{
		while (TRUE)
		{
			while ((absolut / div) >= 10)
			{	powerful *= 10;
				div = powerful;
			}
			if (digit == 1)
			{	printed = (absolut / powerful);
				digit = 0;
			}
			else
			{	printed = (absolut / powerful);
				printed %= 10;
			}
			printed = printed + '0';
			write(1, &printed, 1);
			count++;
			powerful /= 10;
			if (powerful == 0)
			break;
		}
	}
	else
	{	absolut = absolut + '0';
		write(1, &absolut, 1);
		count++;
	}
	return (count);
}
/**
 * get_absolut - absolut number
 * @num: integer
 * Return: return absolut number
 */
unsigned int get_absolut(int num)
{
	unsigned int absolut;

	if (num < 0)
		absolut = ((unsigned int)(num)) * -1;
	else
		absolut = ((unsigned int)(num));
	return (absolut);
}
