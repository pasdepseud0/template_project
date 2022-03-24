/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** return smallest prime number
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int i = 0;

    while (my_is_prime(nb + i) != 1) {
        i++;
    }
    return (nb + i);
}
