#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 with putchar
 * Return: 0
 */
int main(void)
{
int number;

for (number = 0; number <= 9; number++)
{
	putchar('0' + number);
}
putchar('\n');
return (0);
}
