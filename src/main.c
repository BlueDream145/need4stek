/*
** EPITECH PROJECT, 2017
** main.c
** File description:
**
*/

#include "stek.h"

int main(int ac, char **as)
{
	if (ac == 0 || as == NULL)
		return (EXIT_FAIL);
	run_command(START_SIMULATION);
	loop();
	return (EXIT_NORMAL);
}
