/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** find if a number is positiv or negative
*/

#include <unistd.h>
void my_putchar(char c);

int my_isneg(int nb)
{
    if (nb >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
