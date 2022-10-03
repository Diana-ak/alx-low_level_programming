#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - find working index at the count of string
 * @str: string to search
 *
 * Return: index at the end
 */

int word_len(char *str)
{
	int index = 0;
	int len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

int count_words(char *str)
{
	int index = 0;
	int len = 0;
	int words = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: Null
 */

char **strtow(char *str)
{
	char ** string;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	
	words = count_words(str);
	if (words == 0)
		return (NULL);

	str = malloc(sizeof(char *) * (words + 1));
	if (str == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		string[w] = malloc(sizeof(char) * (letters + 1));
		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);

			free(string);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			string[w][l] = str[index++];

		string[w][l] = '\0';
	}
	string[w] = NULL;
	return (string);
}
