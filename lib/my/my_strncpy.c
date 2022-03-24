/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** copie n element of a string in another string
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    int i = 0;

    while (src[i] != '\0'){
        if (i != n){
            dest[i] = src[i];
        }
        i++;
    }
    return dest;
}
