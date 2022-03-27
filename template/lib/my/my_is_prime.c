/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** check if is a prime
*/

int test(int i, int nb)
{
    if (i != nb && i != 1 && i != 0){
        if (nb % i == 0) {
            return 0;
        }
    }
}

int my_is_prime(int nb)
{
    int i = 9;
    if (nb > 2147483647) {
        return (0);
    } else if (nb < 2) {
        return (0);
    }
    while (i != 0) {
        test(i, nb);
        i--;
    }
    return (1);
}
