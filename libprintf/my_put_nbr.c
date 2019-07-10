/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** my_put_nbr
*/

#include "../include/my.h"

int my_put_nbr(int nb)
{
    int pw = 1;
    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    int nb2 = nb;
    while (nb2 > 9)
    {
        pw = pw * 10;
        nb2 = nb2 / 10;
    }
    while (nb > 9)
    {
        my_putchar((nb / pw) + 48);
        nb = nb % pw;
        pw = pw / 10;
    }
    my_putchar(nb + 48);
}
