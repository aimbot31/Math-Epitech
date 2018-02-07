/*
** EPITECH PROJECT, 2017
** ball.c
** File description:
** florent.poinsard@epitech.eu
*/

#include "shapes.h"
#include "window_info.h"

void ball_move(ball_t *ball, player_t *player_1, player_t *player_2)
{
	ball->position.x = ball->position.x + ball->speed.x;
	ball->position.y = ball->position.y + ball->speed.y;
	sfCircleShape_setPosition(ball->ball, ball->position);
	if (ball->position.x >= player_1->position.x - 20 &&
	(ball->position.y >= player_1->position.y && ball->position.y <=
	player_1->position.y + 150)) {
		ball->speed.x *= -1.10;
	} else if (ball->position.x <= player_2->position.x + 20 &&
	ball->position.y >= player_2->position.y && ball->position.y <=
	player_2->position.y + 150) {
		ball->speed.x *= -1.10;
	}
	if (ball->position.y == WINDOW_HEIGHT - 20) {
		ball->speed.y *= -1;
	} else if (ball->position.y == 0) {
		ball->speed.y *= -1;
	}
}
