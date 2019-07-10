/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** Counts and returns the number of characters
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;
    for (; str[i]; i++);
    return (i);
}
