/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** str to word array
*/

#include "all.h"

int is_sep(char c, char *sep)
{
    int   i = 0;

    while (sep[i]) {
        if (c == sep[i])
            return (1);
        i++;
    }
    return (0);
}

int count_words(char *str, char *sep)
{
    int count = 0;
    int i = 0;

    while (str[i]) {
        for (; str[i] && is_sep(str[i], sep); i++);
        if (str[i])
            count++;
        for (; str[i] && !is_sep(str[i], sep); i++);
    }
    return count;
}

int word_size(char const *str, char *sep, int i)
{
    int size = 0;

    for (; str[i] && !is_sep(str[i], sep); i++)
        size++;
    return (size);
}

char **my_str_to_word_array(char *str, char *sep)
{
    char **tab;
    int nb_words = count_words(str, sep);
    int ind_word = 0;
    int i = 0;
    int c = 0;

    tab = malloc(sizeof(char *) * (nb_words + 1));
    while (str[i]) {
        for (; str[i] && is_sep(str[i], sep); i++);
        if (str[i]) {
            tab[ind_word] = malloc(sizeof(char) * (w_sz(str, sep, i) + 1));
            for (c = 0; str[i] && !is_sep(str[i], sep); i++ , c++)
                tab[ind_word][c] = str[i];
            tab[ind_word][c] = '\0';
            ind_word++;
        }
    }
    tab[ind_word] = NULL;
    return (tab);
}

void my_show_word_array(char **tab)
{
    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[i][j]; j++)
            my_putchar(tab[i][j]);
        my_putchar('\n');
    }
}
