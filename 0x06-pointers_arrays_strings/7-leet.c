#include "holberton.h"
/**
 * leet - encodes a string to 1337
 * @s: string to convert
 * Return: the string encoded
 */
char *leet(char *s)
{
	int i = 0;
	int count = 0;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";
	while (s[count] != '\0')
	{
		for (i = 0; str1[i] != '\0'; i++)
		{
			if (s[count] == str1[i])
				s[count] = str2[i];
		}
		count++;
	}
	return (s);
}
