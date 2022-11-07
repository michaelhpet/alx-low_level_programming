#include <stdlib.h>

/**
 * strtow - splits string into words
 * @str: string
 * Return: pointer to array of words
 */

char **strtow(char *str)
{
	int i, j, len, word_count;
	char *word;
	char **words;

	word_count = count_words(str);
	words = malloc(sizeof(char *) * word_count + 1);
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i - 1] == 32)
		{
			len = spacelen(str + i);
			word = malloc(sizeof(char) * (len + 1));
			if (word == NULL)
			{
				free(word);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				word[j] = str[i + j];
			word[j] = 0;
		}
	}

	words[word_count - 1] = NULL;
}

/**
 * count_words - counts words separated by spaces in a string
 * @s: string
 * Return: number of words in s
 */

int count_words(char *s)
{
	int i, length;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == 32 && s[i + 1] != 32)
			length++;
	}

	return (length);
}

/**
 * spacelen - counts the length of a string using space instead of null
 * character
 * @s: string
 * Return: length of s (part)
 */

int spacelen(char *s)
{
	int length;

	length = 0;
	while (s[length] != 32)
		length++;

	return (length);
}
