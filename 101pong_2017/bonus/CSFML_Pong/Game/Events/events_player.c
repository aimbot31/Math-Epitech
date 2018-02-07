/*
** EPITECH PROJECT, 2017
** events_player_2.c
** File description:
** florent.poinsard@epitech.eu
*/

#include "shapes.h"

void events_player_1(player_t *player, sfRenderWindow *window, sfEvent event)
{
	if (event.type == sfEvtKeyPressed && event.key.code == sfKeyUp
	&& player->position.y > 0) {
		player->position.y -= 10;
		sfRectangleShape_setPosition(player->plate,
		player->position);
	} else if (event.type == sfEvtKeyPressed && event.key.code ==
	sfKeyDown && player->position.y < 450) {
		player->position.y += 10;
		sfRectangleShape_setPosition(player->plate,
		player->position);
	}
}

void events_player_2(player_t *player, sfRenderWindow *window, sfEvent event)
{
	if (event.type == sfEvtKeyPressed && event.key.code == sfKeyZ
	&& player->position.y > 0) {
		player->position.y -= 10;
		sfRectangleShape_setPosition(player->plate,
		player->position);
	} else if (event.type == sfEvtKeyPressed && event.key.code ==
	sfKeyS && player->position.y < 450) {
		player->position.y += 10;
		sfRectangleShape_setPosition(player->plate,
		player->position);
	}
}
