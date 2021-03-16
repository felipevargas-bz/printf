#include "holberton.h"
/**
 * print_char - print a char.
 * @character: character to print.
 * @count: printed character counter.
 */
void print_char(va_list character, int *count)
{
    int b = (char)va_arg(character, int);

    write(1, &b, 1);

    *count = *count + 1;
}
/**
 * print_string - print a string.
 * @string: string to print.
 * @count: printed character counter.
 */
void print_string(va_list string, int *count)
{
    char *s = va_arg(string, char *);

    while (s && *s)
    {
        write(1, s++, 1);

        if (*s != '\0')
        {
            *count = *count + 1;
        }
    }
}
