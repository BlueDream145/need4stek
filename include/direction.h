/*
** EPITECH PROJECT, 2018
** DIRECTION_H_
** File description:
** Direction constants
*/

#ifndef DIRECTION_H_
	#define DIRECTION_H_

static const int direction_len = 6;

static const int directions[6] = {
	1500,
	1000,
	600,
	400,
	200,
	0
};

static const char *direction_val[6] = {
	"0.005\n",
	"0.05\n",
	"0.1\n",
	"0.2\n",
	"0.3\n",
	"0.5\n"
};

enum directions_enum {
	Left,
	LowLeft,
	Mid,
	Right,
	LowRight,
	Default
};

#endif /* !DIRECTION_H_ */
