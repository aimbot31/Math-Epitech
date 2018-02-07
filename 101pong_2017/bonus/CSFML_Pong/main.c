/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** florent.poinsard@epitech.eu
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "window_info.h"
#include "window_creation.h"

int main(void)
{
	sfVideoMode mode = {WINDOW_WIDTH, WINDOW_HEIGHT, 32};
	sfRenderWindow *window = sfRenderWindow_create(mode,
		"PongEvolution", sfResize | sfClose, NULL);

	if (window == NULL)
		return (1);
	game_brain(window);
	return (EXIT_SUCCESS);
}
