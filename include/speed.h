/*
** EPITECH PROJECT, 2018
** SPEED_H_
** File description:
** Speed constants
*/

#ifndef SPEED_H_
	#define SPEED_H_

static const int speed_len = 6;

static const double speed_content[6][2] = {
	{ 2000, 0.8 },
	{ 1500, 0.6 },
	{ 1000, 0.5 },
	{ 600, 0.4 },
	{ 400, 0.3 },
	{ 0, 0.2 }
};

enum speed_enum {
	VeryFast,
	Fast,
	Normal,
	Slow,
	VerySlow,
	Default
};

enum speed_value_enum {
	Current,
	Wanted
};

#endif /* !SPEED_H_ */
