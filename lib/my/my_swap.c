/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** swap the content of two integers
*/

void my_swap(int *a, int *b)
{
    int ptr_temporary;

    ptr_temporary = a[0];
    a[0] = b[0];
    b[0] = ptr_temporary;
}
