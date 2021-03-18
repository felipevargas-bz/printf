#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int ui;
    ui = INT_MAX;
    ui += 1024;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = 0;
    len2 = 0;
    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    _printf("len:[%d]\n", len);
    printf("len2:[%d]\n", len2);
    len = 0;
    len2 = 0;
    len = _printf("Entero maximo:[%i, %d]\n", ui, ui);
    len2 = printf("Entero maximo:[%i, %d]\n", ui, ui);
    _printf("len:[%d]\n", len);
    printf("len2:[%d]\n", len2);
    len = 0;
    len2 = 0;
    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    _printf("len:[%d]\n", len);
    printf("len2:[%d]\n", len2);
    len = 0;
    len2 = 0;
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
     _printf("len:[%d]\n", len);
    printf("len2:[%d]\n", len2);

    int size = _printf("Percent:[%%]\n");
    int size2 = printf("Percent:[%%]\n");
    _printf("size:[%d]\n", size);
    printf("size2:[%d]\n", size2);
    return (0);
}