#ifndef MR_DO_MAIN
#define MR_DO_MAIN

#define MAX_X 60 //tamanho de colunas do mapa principal
#define MAX_Y 23 //tamanho de linhas do mapa principal
#define MAX_GHOSTS 1
#define INTERVAL 150000
#include <stdio.h>
#include <ncurses.h>
void config(void);
void draw_map(WINDOW *w, char MAP[MAX_Y][MAX_X]);
void timer_handler();
void config_timer();

struct moving_element {
  int x, y, last_x, last_y;
  int current_direction;
  int state;
  int representation;
  /*
    1 - cima
    2 - baixo
    3 - direita
    4 - esquerda
   * */
};

struct mr_do {
  struct moving_element position;
};

struct ghost {
  struct moving_element position;
};

struct shot {
  struct moving_element position;
};

#endif
