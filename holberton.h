#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

/**
 * print - struct of format to print.
 * @ident: identifier.
 * @pt_func: pointer to function.
 * @count: pointer that counts printed characters.
 */
typedef struct print
{
    char *ident;
    int (*pt_func)(va_list);
}for_mt;

/**
 * print_string - print a string.
 * @string: string to print.
 * @count: printed character counter.
 */
int print_string(va_list string);
/**
 * print_char - print a char.
 * @character: character to print.
 * @count: printed character counter.
 */
int print_char(va_list character);
/**
 * _printf - imprime lo que le venga XD.
 * format - format of print.
 * Return: retractor variable int.
 */
int _printf(const char *format,...);

int print_porcent(va_list argumentos);

int (*get_format_function(const char *identifier))(va_list);

int print_number(va_list integer);

#endif /**HOLBERTON_H*/
