/**
 * charac - handles characters %c
 * @args: list with character to print
 * Return: 1 character
 */

int charac(va_list args)
{
	char c = va_arg(args, int); /*Toma argumento como char, guarda en c*/
	return(write(1, &c, 1)); /*1=stdout, &c=dire var c, 1=num char*/
}

/**
 * string - handles string %s
 * @args: string to print
 * Return: string
 */

int string(va_list args)
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
	char c = '%'
		return(write(1, &c, 1))
}
