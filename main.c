#include "holberton.h"
/**
 * main - test of function _printf.
 * Return: 0 always.
 */
int main(void)
{
	char c = 'K';
	char string [] = "paisas";
	int size;

	size = _printf("Hola %c %s %%", c, string);
	printf("%d", size);

	return (0);
}
