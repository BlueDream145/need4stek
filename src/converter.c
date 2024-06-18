/*
** EPITECH PROJECT, 2018
** converter.c
** File description:
** Convert data to another type
*/

#include "stek.h"

double my_atof(char *str)
{
	double val = 0;
	int e = 0;
	int i = 0;

	while (*str != '\0' && is_number(*str) == true)
		val = val * 10 + (*str++ - '0');
	if (str[i] == '.')
		while (*str != '\0' && is_number(*str) == true)
			val = val * 10 + (*str++ - '0');
	while (e++ < 0)
		val *= 0.1;
	return (val);
}

int is_number(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (false);
	return (true);
}