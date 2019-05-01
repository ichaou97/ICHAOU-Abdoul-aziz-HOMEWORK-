#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: crack <hash>\n");
        return 1;
    }
    const int let = 53;

    string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];

    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] = '\0';

    char cand[6] = "\0\0\0\0\0\0";
    for (int fifth = 0; fifth < let; fifth++)
    {
        for (int fourth = 0; fourth < let; fourth++)
        {
            for (int third = 0; third < let; third++)
            {
                for (int second = 0; second < let; second++)
                {

                    for (int first = 1; first < letters_count; first++)
                    {
                        cand[0] = letters[first];  // 1)
                        cand[1] = letters[second]; // 2)
                        cand[2] = letters[third];  // 3)
                        cand[3] = letters[fourth]; // 4)
                        cand[4] = letters[fifth];  // 5)

                        if (strcmp(crypt(cand, salt), hash) == 0)
                        {
                            printf("%s\n", cand);
                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("Password couldn't be cracked!");

    return 2;
}