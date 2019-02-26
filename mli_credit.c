#include <stdio.h>
#include <cs50.h>

int main(void)
{

    long long n = get_long_long("card number: ");
    while (n % 10 == 0)
    {
        printf("%lld\n", n);
    }
}
