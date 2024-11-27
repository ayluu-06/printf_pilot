#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: char string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	const char *ptr = format; /*Ptr para recorrer format*/
	va_list args; /*Define una lista de args variables*/
	if (format == NULL) 
	{
		return (-1);
	}
	va_start(args, format); /*Inicializa la lista, utilizando el ultimo arg fijo*/
	for (ptr = format; *ptr != '\0'; ptr++) /*Recorre format hasta encontrar el caracter nulo*/
}
