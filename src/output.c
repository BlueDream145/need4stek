/*
** EPITECH PROJECT, 2018
** output.c
** File description:
** Write int output
*/

#include "stek.h"

void my_put_char(char c)
{
	write(1, &c, 1);
}

void my_put_str(const char *str)
{
	for (int i = 0; str[i]; i++)
		my_put_char(str[i]);
}

void my_put_error(const char *str)
{
	for (int i = 0; str[i]; i++)
		write(2, &str[i], 1);
}

int my_put_float(double nbr)
{
	char *base = "0123456789";
	long dec;
	long ent;
	double dec2;
	int i = 0;

	ent = nbr;
	dec = nbr * (float)1000000;
	dec -= ent * 1000000;
	dec2 = (double)dec;
	i += my_putnbr_base_long(ent, base);
	i++;
	my_put_char('.');
	i += my_putnbr_base_long((long)dec2, base);
	return (i);
}

int my_putnbr_base_long(long nbr, char *base)
{
	int i = 0;
	int size;
	long nb;

	if (nbr < 0) {
		nbr = - nbr;
		i += 1;
		my_put_char('-');
	}
	size = my_strlen(base);
	if (nbr > 0) {
		nb = nbr;
		nbr /= size;
		i += my_putnbr_base_long(nbr, base);
		i += 1;
		my_put_char(base[nb % size]);
	}
	return (i);
}