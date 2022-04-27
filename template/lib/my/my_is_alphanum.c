/*
** EPITECH PROJECT, 2021
** my_is_alphanum
** File description:
** differencie les char alphanum des autres char
*/

int my_is_alphanum(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            nb++;
        } else if (str[i] >= '0' && str[i] <= '9')
            nb++;
        i++;
    }
    return nb;
}
