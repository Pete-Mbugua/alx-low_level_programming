#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
#define CHARACTER_SET "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

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
        int index = rand() % (sizeof(CHARACTER_SET) - 1);
        password[i] = CHARACTER_SET[index];
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("Generated password: %s\n", password);

    return 0;
}
