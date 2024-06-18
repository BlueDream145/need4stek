/*
** EPITECH PROJECT, 2017
** file.h
** File description:
**
*/

#ifndef STRING_H_
	#define STRING_H_

// string.c
char **my_str_to_word_array(const char *str, char separator);
void split_string(const char *str, char separator,
	char **result, char *content);
char *my_strdup(const char *src);
char *my_strcpy(char *dest, const char *src);
int my_strcmp(const char *s1, const char *s2);

// utils.c
int my_strlen(const char *str);
char *my_strcat(char *dest, const char *src);
void free_char_buffer(char **tmp);

#endif /* STRING_H_ */