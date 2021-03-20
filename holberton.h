#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

#define TRUE 1

/**
 * struct print - struct of format to print.
 * @ident: identifier.
 * @pt_func: pointer to function.
 */
typedef struct print
{
char *ident;
int (*pt_func)(va_list);
} for_mt;
/**
 * print_string - print a string.
 * @string: string to print.
 * Return: size of the string.
 */
int print_string(va_list string);
/**
 * print_char - print a char.
 * @argument_list: character to print.
 * Return: size of the char
 */
int print_char(va_list argument_list);
/**
 * _printf - imprime lo que le venga XD.
 * @format: format of print.
 * Return: retractor variable int.
 */
int _printf(const char *format, ...);
int print_porcent(va_list argument_list);
int (*get_format_function(const char *identifier))(va_list);
int print_integer(va_list integer);
unsigned int get_absolut(int num);
#endif /**HOLBERTON_H*/
