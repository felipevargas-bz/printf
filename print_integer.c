#include "holberton.h"
/**
 * print_number - function to print numbers
 * @integer: name of the items passed trough va_list
 * Return: int
 */
int print_number(va_list integer)
{	long a = 0, residuo = 1, divof10 = 10, solve = 10;
	int count = 0, num = va_arg(integer, int);

	if (num < 0)
	{
		num = -1 * num;
		write(1, "-", 1);
		count++;
	}
	if (num >= 10)
	{
		while (TRUE)
		{
			while ((num / solve) > 10)
			{	divof10 *= 10;
				solve = divof10;
			}
			if (residuo == 1)
			{	a = (num / divof10);
				residuo = 0;
			}
			else
			{	a = (num / divof10);
				a %= 10;
			}
			a = a + '0';
			write(1, &a, 1);
			count++;
			divof10 /= 10;
			if (divof10 == 0)
				break;
		}
	}
	else
	{	num = num + '0';
		write(1, &num, 1);
		count++;
	}
	return (count);
}
