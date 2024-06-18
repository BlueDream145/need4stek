/*
** EPITECH PROJECT, 2018
** utils.c
** File description:
** Extra functions
*/

#include "stek.h"

int my_strlen(const char *str)
{
	int len = 0;

	for (; str[len]; len++);
	return (len);
}

char *my_strcat(char *dest, const char *src)
{
	int dest_len = my_strlen(dest);
	int j = 0;

	for (j = 0; src[j] != '\0'; j++)
		dest[dest_len + j] = src[j];
	dest[dest_len + j] = '\0';
	return (dest);
}

void free_char_buffer(char **tmp)
{
	if (tmp != NULL) {
		for (int i = 0; tmp[i]; i++)
			free(tmp[i]);
		free(tmp);
	}
}