#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * charac - handles characters %c
 * @c: list with character to print
 * Return: 1 character
 */

int charac(char c)
{
	return(write(1, &c, 1)); /*1=stdout, &c=dire var c, 1=num char*/
}

/**
 * string - handles string %s
 * @str: string to print
 * Return: string
 */

int string(char *str)
{
	int count = 0; /*inicializa count*/
	int i;

	if (str == NULL)
	{
		return (-1);
	}
	for (i = 0; str[i] != '\0'; i++) /*recorre str con i hasta encontrar el valor nulo*/
	{
		write(1, &str[i], 1); /*1=stdout, str[count]=,1=*/
		count++; /*aumenta el contador despues de cada caracter*/
	}
	return (count); /*retorna el num de char impresos*/
}

/**
 * percent - handles percent %
 * @void: no parameters
 * Return: num of char
 */

int percent(void)
{
	char c = '%';
	return(write(1, &c, 1));
}
