/*
** EPITECH PROJECT, 2018
** string.h
** File description:
** String manipulation
*/

#include "stek.h"

char **my_str_to_word_array(const char *str, char separator)
{
	char **result = malloc(sizeof(char *) * my_strlen(str));
	char *content = malloc(sizeof(char) * (my_strlen(str) + 1));

	if (result == NULL || content == NULL || my_strlen(str) == 0)
		return (NULL);
	split_string(str, separator, result, content);
	return (result);
}

void split_string(const char *str, char separator,
	char **result, char *content)
{
	int j = 0;
	int k = 0;

	for (int i = 0; i < my_strlen(str) + 1; i++) {
		if (str[i] != separator) {
			content[j] = str[i];
			j++;
			content[j] = '\0';
		} else if (my_strlen(content) > 0) {
			j = 0;
			result[k] = my_strdup(content);
			k++;
		}
	}
	if (my_strlen(content) > 0) {
		j++;
		content[j] = '\0';
		result[k] = my_strdup(content);
		k++;
	}
	result[k] = NULL;
}

char *my_strdup(const char *src)
{
	char *str;
	int len = my_strlen(src) + 1;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str = my_strcpy(str, src);
	return (str);
}

char *my_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int my_strcmp(const char *s1, const char *s2)
{
	int i = 0;

	for (i = 0; s1[i] == s2[i] && s1[i]; i++);
	return (s1[i] - s2[i]);
}