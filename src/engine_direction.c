/*
** EPITECH PROJECT, 2018
** engine_direction.c
** File description:
** Manage car direction
*/

#include "stek.h"

int manage_direction(void)
{
	char *line = NULL;
	char **data = NULL;
	double direction;

	my_put_str(GET_INFO_COMMAND);
	line = read_line();
	if (line == NULL)
		return (2);
	finished(line);
	line = prepare_str(line);
	data = my_str_to_word_array(line, ':');
	if (data == NULL)
		return (2);
	direction = my_atof(data[DIRECTION_POS]);
	if (convert_direction(data, direction) == true)
		return (true);
	free(line);
	free_char_buffer(data);
	return (false);
}

int convert_direction(char **data, double direction)
{
	double val = my_atof(data[1]) - my_atof(data[31]);
	int success = false;

	if (direction >= 1500)
		success = handle_direction(val, "0.005\n");
	else if (direction >= 1000)
		success = handle_direction(val, "0.05\n");
	else if (direction >= 600)
		success = handle_direction(val, "0.1\n");
	else if (direction >= 400)
		success = handle_direction(val, "0.2\n");
	else if (direction >= 200)
		success = handle_direction(val, "0.3\n");
	else
		success = handle_direction(val, "0.5\n");
	return (success);
}

int handle_direction(double val, const char *str)
{
	const char *wheel_command = "wheels_dir:";
	char *line = NULL;

	my_put_str(wheel_command);
	if (val < 0)
		my_put_char('-');
	my_put_str(str);
	if ((line = read_line()) == NULL)
		return (false);
	if (finished(line) == true)
		return (true);
	return (false);
}