#inlude "main.h"

/**
 * _strchr - allocate character in a string
 * @c: is the character
 * @s: is the string
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s == b;
			return (s);
		}

		return ('\0');
	}
}

