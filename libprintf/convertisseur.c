/*
** EPITECH PROJECT, 2018
** convertisseur.c
** File description:
** converti les nbr
*/
#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

int binaire(int arr)
{
    int result[50];
    int i = 0;
    while (arr != 0) {
        result[i] = arr % 2;
        arr = arr / 2;
        i++;
    }
    i--;
    for (i; i >= 0; i--)
        my_putchar(result[i] + 48);
}

int octal(int arr)
{
    int result[50];
    int i = 0;
    while (arr != 0) {
        result[i] = arr % 8;
        arr = arr / 8;
        i++;
    }
    i--;
    for (i; i >= 0; i--)
        my_putchar(result[i] + 48);
}

int hexa(int arr)
{
    int result[50];
    int i = 0;
    while (arr != 0) {
        result[i] = arr % 16;
        arr = arr / 16;
        i++;
    }
    i--;
    for (i; i >= 0; i--) {
        if (result[i] > 0 && result[i] < 9) {
            my_putchar(result[i] + 48);
        } else {
            my_putchar(result[i] + 48 + 7);
        }
    }
}

int hexa_min(int arr)
{
    int result[50];
    int i = 0;
    while (arr != 0) {
        result[i] = arr % 16;
        arr = arr / 16;
        i++;
    }
    i--;
    for (i; i >= 0; i--) {
        if (result[i] > 0 && result[i] < 9) {
            my_putchar(result[i] + 48);
        } else {
            my_putchar(result[i] + 48 + 7 + 32);
        }
    }
}