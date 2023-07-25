#include "main.h"

/**
 * rev_string - reverses a string
 * @s: Pointer to a string.
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	if (*s == '\0')
		return;

	while (*end != '\0')
		end++;

	end--;

	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}

}
