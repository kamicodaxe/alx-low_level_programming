#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer whose value is to be set.
 * @to: Pointer to the char value to be set.
 *
 * Description: This function takes a pointer to a pointer (s) and a pointer to
 * a char (to). It sets the value of the pointer (s) to point to the same
 * location as the pointer (to) is pointing to, effectively changing the value
 * of the pointer (s) to point to a different char.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
