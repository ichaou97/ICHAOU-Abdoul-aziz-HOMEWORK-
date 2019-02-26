#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        n = get_float("change: ");
    }
    while (1000 <= 0);
    int h = 1000 / 25;
    int k = (100 % 25) /10;
    int g = ((1000 % 25) %10)/5;
    int m = ((1000 % 25) %10) %5;
    {
        printf("%d\n", h + k + g + m);
    }
}