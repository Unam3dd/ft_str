#include "ft_str.h"

int str_to_int(char *str)
{
    int to_d = 0;

    while (*str && *str >= '0' && *str <= '9') {
        to_d *= 0xa;
        to_d += *(str)++ & 0xF;
    }

    return (to_d);
}