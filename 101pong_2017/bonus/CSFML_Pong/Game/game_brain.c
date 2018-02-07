/*
** EPITECH PROJECT, 2017
** game_start.c
** File description:
** florent.poinsard@epitech.eu
*/

#include <SFML/Graphics.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "shapes.h"
#include "window_basics_event.h"
#include "events_player.h"

void game_brain(sfRenderWindow *window)
{
	sfEvent event;
	player_t *player_1 = malloc(sizeof(player_t));
	player_t *player_2 = malloc(sizeof(player_t));
	ball_t *ball = malloc(sizeof(ball_t));

	init_them_all(player_1, player_2, ball);
	while (sfRenderWindow_isOpen(window)) {
		sfRenderWindow_clear(window, sfBlack);
		usleep(10000);
		while (sfRenderWindow_pollEvent(window, &event)) {
			close_window(window, event);
			events_player_1(player_1, window, event);
			events_player_2(player_2, window, event);
		}
		if (ball->position.x <= 0 || ball->position.x >= 800)
			exit(1);
		ball_move(ball, player_1, player_2);
		draw(window, player_1, player_2, ball);
		sfRenderWindow_display(window);
	}
}
