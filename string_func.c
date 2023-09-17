#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string is passed to the function
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;
	int i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len += 1;
	}
	return (len);
}

/**
 * *_strcpy - copies the string pointed to by
 * src, including null byte to the bufer pointed
 * to by dest.
 * @dest: destination string,
 * @src: source string
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *destStart = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (destStart);
}

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	;
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');
	return (dest);
}

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are the same,
 * a negetive or a positive values if they are not
 * the same
 */

int _strcmp(char *s1, char *s2)
{
	int value = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			value = s1[i] - s2[i];
			break;

		}
	}
	return (value);
}
/**
 * _strchr - locates a character in a string.
 * @s: string used to find the occurence of the charcter
 * @c: the character to look for.
 * Return: a pointer to the first occurence of c,
 * NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
