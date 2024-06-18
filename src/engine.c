/*
** EPITECH PROJECT, 2018
** engine.c
** File description:
** Process
*/

#include "stek.h"

void loop(void)
{
	int callback = 0;

	while (true) {
		callback = manage_speed();
		if (callback == 2)
			continue;
		if (callback == true)
			break;
		callback = manage_direction();
		if (callback == 2)
			continue;
		if (callback == true)
			break;
	}
	run_command(STOP_SIMULATION);
}

char *prepare_str(char *str)
{
	char *tmp = malloc(sizeof(char) * COMMAND_LIMIT_SIZE);
	int pos = 0;
	int scd = 0;

	if (tmp == NULL)
		return (NULL);
	for (int i = 0; i < 3;)
		if (str[scd++] == ':')
			i++;
	for (; str[scd]; scd++)
		if ((str[scd] >= '0' && str[scd] <= '9') || str[scd] == '.'
			|| str[scd] == ':') {
			tmp[pos] = str[scd];
			pos++;
		}
	tmp[pos] = '\0';
	return (tmp);
}

int finished(char *str)
{
	int i = my_strlen(str) - 1;
	int j = 0;
	char *tmp = malloc(sizeof(char) * (my_strlen(str) + 1));

	if (tmp == NULL)
		return (true);
	for (; str[i] && str[i] != ':'; i--);
	i--;
	for (; str[i] && str[i] != ':'; i--);
	i++;
	for (; str[i] && str[i] != ':';)
		tmp[j++] = str[i++];
	tmp[j] = '\0';
	if (my_strcmp(END_COMMAND, tmp) == 0)
	{
		free(tmp);
		run_command(STOP_SIMULATION);
		return (true);
	}
	free(tmp);
	return (false);
}
