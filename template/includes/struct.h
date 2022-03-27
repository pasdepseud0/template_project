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

char **my_str_to_word_array(char *str, char *sep);
char *solv_map(solv_t *solv, char *file);
int play_game(solv_t *solv);
int free_game(solv_t *solv);
int move_player(solv_t *solv, int key);
void player_mvleft(solv_t *solv);
void player_mvright(solv_t *solv);
void player_mvup(solv_t *solv);
void player_mvdown(solv_t *solv);
void get_player_pos(solv_t *solv);

#endif
