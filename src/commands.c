/*
** EPITECH PROJECT, 2018
** commands.c
** File description:
** Run and manipulate commands
*/

#include "stek.h"

int run_command(const char *command)
{
	char *line = NULL;

	my_put_str(command);
	if ((line = read_line()) == NULL)
		return (false);
	if (finished(line) == true)
		return (true);
	return (false);
}

int run_forward(double val)
{
	const char *forward = "car_forward:";
	char *line = NULL;

	my_put_str(forward);
	my_put_float(val);
	my_put_char('\n');
	if ((line = read_line()) == NULL)
		return (false);
	if (finished(line) == true)
		return (true);
	return (false);
}
