/*
** EPITECH PROJECT, 2018
** pourcentages.c
** File description:
** manage % in my_printf
*/
#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

int poucentages(char *arr, int *i)
{
    int e;
    for (int i = 0; arr[i] == '%'; i++)
        e++;
    e = e / 2;
    for (e; e > 0; e--)
        my_putchar('%');
}