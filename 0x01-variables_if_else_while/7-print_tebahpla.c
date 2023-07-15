#include <stdio.h>
/**
 * main - prints alphabet with put char in reversed
 * Return: 0
 */
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
