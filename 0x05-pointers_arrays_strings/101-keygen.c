
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generates a random password
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char password[84];
    int i, sum, diff;

    srand(time(0));

    sum = 0;
    i = 0;

    while (sum < 2772 - 126)
    {
        password[i] = rand() % 126;
        if (password[i] == 0)
            break;
        sum += password[i];
        i++;
    }

    diff = 2772 - sum;
    password[i] = diff;
    password[i + 1] = '\0';

    printf("%s", password);

    return (0);
}

