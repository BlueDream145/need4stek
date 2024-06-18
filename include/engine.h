/*
** EPITECH PROJECT, 2018
** ENGINE_H
** File description:
** Engine
*/

#ifndef ENGINE_H_
	#define ENGINE_H_

enum callback {
	callBreak,
	callContinue,
	callRun
};

// commands.c
int run_command(const char *command);
int run_forward(double val);

// converter.c
double my_atof(char *str);
int is_number(char c);

// engine_direction.c
int manage_direction(void);
int convert_direction(char **data, double direction);
int handle_direction(double val, const char *str);

// engine_speed.c
int convert_speed(double val);
int manage_speed(void);

// engine.c
void loop(void);
char *prepare_str(char *str);
int finished(char *str);

#endif /* !ENGINE_H_ */
