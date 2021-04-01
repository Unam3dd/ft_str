#include "ft_str.h"

int ft_reverse_int(int n)
{
    int to_d = 0;

    while (n) {
        to_d *= 10;
        to_d += (n % 10);
        n /= 10;
    }

    return (to_d);
}