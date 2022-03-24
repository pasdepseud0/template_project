/*
** EPITECH PROJECT, 2022
** proto.h
** File description:
** all proto lib
*/

#pragma once

char **my_str_to_word_array(char *str, char *sep);
int my_find_prime_sup(int nb);
int my_is_alphanum(char *str);
int my_is_prime(int nb);
int my_isneg(int nb);
int my_put_float(float nb);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1 , char const *s2);
char *my_strcpy(char *dest , char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1 , char const *s2, int n);
char *my_strncpy(char *dest , char const *src , int n);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_getnbr(char *str);
int negative_compt(char const *str, int *negative);
int my_compute_power_rec(long nb, int p);
void my_printf(char *s , ...);
