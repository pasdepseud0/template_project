/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** return str
*/

char *my_strcat(char *dest, char const *src)
{
    int len = 0;
    int i = 0;

    for (; dest[len] != '\0'; len++);
    for (; src[i] != '\0'; i++){
        dest[len + i] += src[i];
    }
    dest[len + i] = '\0';
    return dest;
}
