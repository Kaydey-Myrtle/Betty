#include <main.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to change
 *
 * Return: address of s
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
