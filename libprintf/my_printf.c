/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/
#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

char my_printf(char *str, ...)
{
    int nb = my_strlen(str);
    va_list valist;
    va_start(valist, str);
    for (int i = 0; i < nb; i++) {
        if (str[i] == '%') {
            i++;
            while (str[i] == ' ')
                i++;
            switch (str[i]) {
            case 'c' :
                my_putchar(va_arg(valist, int));
                break;
            case 's' :
            case 'S' :
                my_putstr(va_arg(valist, char *));
                break;
            case 'i' :
            case 'd' :
                my_put_nbr(va_arg(valist, int));
                break;
            case 'b' :
                binaire(va_arg(valist, int));
                break;
            case 'o' :
                octal(va_arg(valist, int));
                break;
            case 'x' :
                hexa_min(va_arg(valist, int));
                break;
            case 'X' :
                hexa(va_arg(valist, int));
                break;
            case '%' :
                poucentages(va_arg(valist, char *), &i);
                return (0);
                break;
            case 'p' :
                my_putstr("0x");
                hexa(va_arg(valist, int));
                break;
            case 'm' :
                my_putstr("Success");
                break;
            case '+' :
                my_putchar('+');
                my_put_nbr(va_arg(valist, int));
                break;
            default :
                my_putchar('%');
                my_putchar(str[i]);
            }
        } else
            my_putchar(str[i]);
    }
}