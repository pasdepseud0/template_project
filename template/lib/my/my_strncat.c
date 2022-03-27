/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** return str
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = 0;
    int i = 0;

    for (; dest[len] != '\0'; len++);
    for (; src[i] != '\0' && i < nb; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
