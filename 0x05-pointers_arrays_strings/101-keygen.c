#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(0));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int randomCharType = rand() % 3;

        if (randomCharType == 0)
        {
            password[i] = rand() % 10 + '0'; // Random digit (0-9)
        }
        else if (randomCharType == 1)
        {
            password[i] = rand() % 26 + 'a'; // Random lowercase letter (a-z)
        }
        else
        {
            password[i] = rand() % 26 + 'A'; // Random uppercase letter (A-Z)
        }
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("Generated password: %s\n", password);

    return 0;
}
