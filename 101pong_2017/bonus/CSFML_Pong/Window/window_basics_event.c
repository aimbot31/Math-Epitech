/*
** EPITECH PROJECT, 2017
** window_basics_event.c
** File description:
** florent.poinsard@epitech.eu
*/

#include <SFML/Graphics.h>

void close_window(sfRenderWindow *window, sfEvent event)
{
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
	}
}
