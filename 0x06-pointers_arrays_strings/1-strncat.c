#include <main.h>

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
