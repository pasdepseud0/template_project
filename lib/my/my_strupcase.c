/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** change minuscule to majuscule
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    return str;
}
