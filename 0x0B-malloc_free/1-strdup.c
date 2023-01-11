#include "main.h"
#include <stdlib.h>

/*
 * * _strdup - duplicates a string
 * * @str: char
 * * Description: Duplicates string to a newly allocated space in memory
 * * Return: char
 */

char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
	return (NULL);
	i = 0;

	while (str[i] != '\0')
	i++;
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
	return (NULL);

	for (r = 0; str[r]; r++)
	aaa[r] = str[r];
	return (aaa);
}
