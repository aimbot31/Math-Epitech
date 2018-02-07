/*
** EPITECH PROJECT, 2017
** create_players.c
** File description:
** florent.poinsard@epitech.eu
*/

#include <stdlib.h>
#include "shapes.h"

void init_them_all(player_t *player_1, player_t *player_2, ball_t *ball)
{
	if (player_1 == NULL || player_2 == NULL || ball == NULL)
		exit(1);
	init_player_1(player_1);
	init_player_2(player_2);
	init_ball(ball);
}

void init_ball(ball_t *ball)
{
	ball->size.x = 10;
	ball->size.y = 10;
	ball->position.x = 395;
	ball->position.y = 295;
	ball->color.r = 255;
	ball->color.g = 255;
	ball->color.b = 255;
	ball->color.a = 255;
	ball->ball = sfCircleShape_create();
	ball->speed.x = 2;
	ball->speed.y = 1;
	if (ball->ball == NULL)
		exit(1);
	sfCircleShape_setRadius(ball->ball, RADIUS_BALL);
	sfCircleShape_setFillColor(ball->ball, ball->color);
	sfCircleShape_setPosition(ball->ball, ball->position);
}

void init_player_1(player_t *player_1)
{
	player_1->size.x = 20;
	player_1->size.y = 150;
	player_1->position.x = 765;
	player_1->position.y = 225;
	player_1->color.r = 44;
	player_1->color.g = 117;
	player_1->color.b = 255;
	player_1->color.a = 255;
	player_1->plate = sfRectangleShape_create();
	if (player_1->plate == NULL)
		exit(1);
	sfRectangleShape_setSize(player_1->plate, player_1->size);
	sfRectangleShape_setFillColor(player_1->plate, player_1->color);
	sfRectangleShape_setPosition(player_1->plate, player_1->position);
}

void init_player_2(player_t *player_2)
{
	player_2->size.x = 20;
	player_2->size.y = 150;
	player_2->position.x = 15;
	player_2->position.y = 225;
	player_2->color.r = 220;
	player_2->color.g = 20;
	player_2->color.b = 60;
	player_2->color.a = 255;
	player_2->plate = sfRectangleShape_create();
	if (player_2->plate == NULL)
		exit(1);
	sfRectangleShape_setSize(player_2->plate, player_2->size);
	sfRectangleShape_setFillColor(player_2->plate, player_2->color);
	sfRectangleShape_setPosition(player_2->plate, player_2->position);
}
