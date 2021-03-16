#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

/**
 * struct print - struct of function pointer
 * @ident: pointer variable
 * @pt_func: function pointer
 *
 */

typedef struct print
{
char *ident;
int (*pt_func)(va_list);
} for_mt;

/**
 * print_string - print a string.
 * @string: string to print.
 * Return: items of va_list.
 */
int print_string(va_list string);
/**
 * print_char - print a char.
 * @character: character to print.
 * Return: character of va_list.
 */
int print_char(va_list character);
/**
 * _printf - print anything comes trough format.
 * @format: format of print.
 * Return: retractor variable int.
 */
int _printf(const char *format, ...);
/**
 * print_porcent - prints porcent function
 * @argumentos: name of the items passed
 * Return: size of string.
 */
int print_porcent(va_list argumentos);
/**
 * print_number - prints decimal numbers
 * @integer: name of the items in the va_list
 * Return: size of int
 */
int print_number(va_list integer);

int (*get_format_function(const char *identifier))(va_list);
#endif /**HOLBERTON_H*/
