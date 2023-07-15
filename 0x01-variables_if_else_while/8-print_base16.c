#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 with putchar
 * Return: 0
 */
int main(void)
{
int number;
char letter;
for (number = 0; number <= 9; number++)
{
	putchar('0' + number);
}

for (letter = 'a'; letter <= 'f'; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
