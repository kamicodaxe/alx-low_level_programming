#include "main.h"

/**
* _strcpy - A function that copies the string pointed
* to by src,including the terminating null byte \0
* to the buffer pointed to by dest.
* @dest: Pointer char, destination of copy
* @src: Pointer char, source of copy
*
* Return: The pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
