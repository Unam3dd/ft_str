#include "ft_str.h"

int ft_count_digits(char *str)
{
    int n = 0;

    while (*str)
        if (*str >= '0' && *(str)++ <= '9')
            n++;

    return (n);
}

int ft_count_digits_n(int n)
{
    int c = 0;

    while (n) {
        c++;
        n /= 10;
    }
    
    return (c);
}