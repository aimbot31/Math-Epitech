/*
** EPITECH PROJECT, 2017
** players.h
** File description:
** florent.poinsard@epitech.eu
*/

#ifndef PLAYERS_H
#define PLAYERS_H

#include <SFML/Graphics.h>

#define RADIUS_BALL 10

typedef struct info_ball {
	sfVector2f position;
	sfVector2f size;
	sfCircleShape *ball;
	sfColor color;
	sfVector2f speed;
} ball_t;

typedef struct info_players {
	sfVector2f position;
	sfVector2f size;
	sfRectangleShape *plate;
	sfColor color;
} player_t;

void init_them_all(player_t *player_1, player_t *player_2, ball_t *ball);
void init_player_1(player_t *player_1);
void init_player_2(player_t *player_2);
void init_ball(ball_t *ball);
void ball_move(ball_t *ball, player_t *player_1, player_t *player_2);

#endif /* end of include guard: PLAYERS_H */
