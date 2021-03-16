#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print - struct of format to print.
 * @ident: identifier.
 * @pt_func: pointer to function.
 * @count: pointer that counts printed characters.
 */
typedef struct print
{
    char *ident;
    void (*pt_func)(va_list, int *);
}for_mt;

/**
 * print_string - print a string.
 * @string: string to print.
 * @count: printed character counter.
 */
void print_string(va_list string, int *count);
/**
 * print_char - print a char.
 * @character: character to print.
 * @count: printed character counter.
 */
void print_char(va_list character, int *count);
/**
 * _printf - imprime lo que le venga XD.
 * format - format of print.
 * Return: retractor variable int.
 */
int _printf(const char *format,...);
#endif /**HOLBERTON_H*/
