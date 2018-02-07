/*
** EPITECH PROJECT, 2017
** draw_player_1.c
** File description:
** florent.poinsard@epitech.eu
*/

#include "shapes.h"

void draw(sfRenderWindow *window, player_t *p1, player_t *p2, ball_t *ball)
{
	sfRenderWindow_drawRectangleShape(window, p2->plate, NULL);
	sfRenderWindow_drawCircleShape(window, ball->ball, NULL);
	sfRenderWindow_drawRectangleShape(window, p1->plate, NULL);
}
