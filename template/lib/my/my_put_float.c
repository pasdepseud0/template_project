/*
** EPITECH PROJECT, 2021
** my_put_float.c
** File description:
** put a float
*/

void my_putchar(char c);
int my_put_nbr(int nb);

int my_put_float(float nb)
{
    if (nb < 0){
        my_putchar('-');
        nb = nb * (-1);
    }
    int before_comma = nb;
    float temp = (nb - before_comma);
    int after_comma = temp * 101;

    my_put_nbr(before_comma);
    my_putchar('.');
    if (after_comma < 10){
        my_putchar('0');
    }
    my_put_nbr(after_comma);
    return 0;
}
