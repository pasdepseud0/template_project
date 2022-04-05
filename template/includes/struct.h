/*
** EPITECH PROJECT, 2021
** st_template.h
** File description:
** structure for solver
*/

#include "my.h"

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct solv_st {
    char **buf;
    char *map;
    int size;
    int x;
    int y;
} solv_t;

#endif
