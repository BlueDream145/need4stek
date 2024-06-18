/*
** EPITECH PROJECT, 2018
** engine_speed.c
** File description:
** Speed
*/

#include "stek.h"

int manage_speed(void)
{
	char *line = NULL;
	char **data = NULL;
	double speed;

	my_put_str(GET_INFO_COMMAND);
	line = read_line();
	if (line == NULL)
		return (2);
	finished(line);
	line = prepare_str(line);
	data = my_str_to_word_array(line, ':');
	if (data == NULL)
		return (2);
	speed = my_atof(data[SPEED_POS]);
	if (convert_speed(speed) == true)
		return (true);
	free(line);
	free_char_buffer(data);
	return (false);
}

int convert_speed(double val)
{
	double speed_val;
	int speed;

	if (val >= 2000)
		speed_val = 1.0;
	else if (val >= 1500)
		speed_val = 0.8;
	else if (val >= 1000)
		speed_val = 0.6;
	else if (val >= 600)
		speed_val = 0.5;
	else if (val >= 400)
		speed_val = 0.4;
	else
		speed_val = 0.3;
	speed = run_forward(speed_val);
	return (speed);
}